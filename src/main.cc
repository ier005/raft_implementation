#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>
#include <signal.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <iostream>
#include <vector>
#include <fstream>

#include "raft.pb.h"

#define BUF_SIZE 1024
#define ELECTION_PORT 2333
#define BROADCAST_TIME 20  //ms
#define ELECTION_TIMEOUT 200

using namespace std;

enum {
    FOLLOWER,
    CANDIDATE,
    LEADER
};

enum {
    voteRequest = 1,
    voteReply,
    leaderBeat,
    followerTimeout,
    candidateTimeout
};

int node_id;
vector<string> node_list;
int state;
int current_term;
int leader_id = -1;
int node_num;
int listen_fd;
int send_fd;
struct sockaddr_in self_addr;
int recv_hb;

int gethost(string name, struct in_addr *ip)
{
    struct hostent *h;

    h = gethostbyname(name.c_str());
    if (h == NULL)
        return -1;
    *ip = *(struct in_addr *)(h->h_addr);
    return 0;
}

int read_nodes(string file, vector<string> &list)
{
    string s;

    ifstream in(file);
    if (!in.is_open())
        return -1;

    while (!in.eof()) {
        getline(in, s);
        if (s.length() == 0)
            continue;
        if (s.at(s.length() - 1) ==  '\n')
            s.erase(s.length() - 1);
        list.push_back(s);
    }
    
    return 0;
}


int set_timer(int n, void (*handler)(int))
{
    struct itimerval itv;
    itv.it_value.tv_sec = 0;
    itv.it_value.tv_usec = n;
    itv.it_interval.tv_sec = 0;
    itv.it_interval.tv_usec = 0;

    setitimer(ITIMER_REAL, &itv, NULL);
    signal(SIGALRM, handler);
}

void follower_timeout(int n)
{
    sendto(send_fd, "\x04\x00", 2, 0, (const struct sockaddr *)&self_addr, sizeof(self_addr));
}

void candidate_timeout(int n)
{
    sendto(send_fd, "\x05\x00", 2, 0, (const struct sockaddr *)&self_addr, sizeof(self_addr));
}

void leader_heartbeat(int n)
{
    char buf[BUF_SIZE];
    int size;
    struct sockaddr_in addr;
    LeaderBeat lb;

    lb.set_term(current_term);
    lb.set_leaderid(node_id);
    *(short*)buf = leaderBeat;
    lb.SerializeToArray(buf + 2, lb.ByteSizeLong());

    addr.sin_family = AF_INET;
    addr.sin_port = htons(ELECTION_PORT);
    for (auto s : node_list) {
        int res;
        struct in_addr ip;

        res = gethost(s, &ip);
        if (res) {
            cerr << "[WARNING] Can not resolve " << s << endl;
            continue;
        }
        addr.sin_addr = ip;
        sendto(send_fd, buf, lb.ByteSizeLong() + 2, 0, (const struct sockaddr *)&addr, sizeof(addr));
    }

}


int follower()
{
    cout << "[INFO] STATE: Follower" << endl;
    set_timer(ELECTION_TIMEOUT * 1000, follower_timeout);

    while (1) {
        struct sockaddr_in client_addr;
        socklen_t len;
        char buf[BUF_SIZE];
        short type;
        int size;
        int break_flag = 0;

        if ((size = recvfrom(listen_fd, buf, BUF_SIZE, 0, (struct sockaddr *)&client_addr, &len)) <= 0) {
            cerr << "[WARNING] Recv data failed" << endl;
            continue;
        }
        memcpy(&type, buf, 2);
        switch (type) {
            case voteRequest: {
                VoteRequest vr;
                vr.ParseFromArray(buf + 2, size -2);
                if (vr.term() <= current_term)
                    break;
                current_term = vr.term();
                VoteReply vrep;
                vrep.set_term(current_term);
                vrep.set_votegranted(true);
                *(short*)buf = voteReply;
                vrep.SerializeToArray(buf + 2, vrep.ByteSizeLong());
                sendto(send_fd, buf, vrep.ByteSizeLong() + 2, 0, (const struct sockaddr *)&client_addr, sizeof(client_addr));
                break;
            }
            
            case voteReply:
                break;

            case leaderBeat: {
                LeaderBeat lb;
                lb.ParseFromArray(buf + 2, size - 2);
                if (lb.term() >= current_term) {
                    current_term = lb.term();
                    leader_id = lb.leaderid();
                    recv_hb = 1;
                    cout << "[INFO] The leader is " << node_list[leader_id] << endl;
                }
                break;
            }

            case followerTimeout: {
                if (recv_hb) {
                    recv_hb = 0;
                    set_timer(ELECTION_TIMEOUT * 1000, follower_timeout);
                } else {
                    state = CANDIDATE;
                    break_flag = 1;
                }
                break;
            }

            case candidateTimeout:
                break;

            default:
                break;
        }
        if (break_flag)
            break;
    }
    
}

void candidate()
{
    cout << "[INFO] STATE: Candidate" << endl;
    int vote_count = 1;
    if (node_num == 1) {
        state = LEADER;
        return;
    }
    char buf[BUF_SIZE];
    int size;
    struct sockaddr_in addr;
    VoteRequest vr;

    current_term++;
    vr.set_term(current_term);
    vr.set_candidateid(node_id);
    *(short*)buf = voteRequest;
    vr.SerializeToArray(buf + 2, vr.ByteSizeLong());

    addr.sin_family = AF_INET;
    addr.sin_port = htons(ELECTION_PORT);
    for (auto s : node_list) {
        int res;
        struct in_addr ip;

        res = gethost(s, &ip);
        if (res) {
            cerr << "[WARNING] Can not resolve " << s << endl;
            continue;
        }
        addr.sin_addr = ip;
        sendto(send_fd, buf, vr.ByteSizeLong() + 2, 0, (const struct sockaddr *)&addr, sizeof(addr));
    }

    set_timer((ELECTION_TIMEOUT + rand() % 100) * 1000, candidate_timeout);

    while (1) {
        struct sockaddr_in client_addr;
        socklen_t len;
        short type;
        int break_flag = 0;

        if ((size = recvfrom(listen_fd, buf, BUF_SIZE, 0, (struct sockaddr *)&client_addr, &len)) <= 0) {
            cerr << "[WARNING] Recv data failed" << endl;
            continue;
        }
        memcpy(&type, buf, 2);
        switch (type) {
            case voteRequest: {
                VoteRequest vr;
                vr.ParseFromArray(buf + 2, size -2);
                if (vr.term() <= current_term)
                    break;
                current_term = vr.term();
                VoteReply vrep;
                vrep.set_term(current_term);
                vrep.set_votegranted(true);
                *(short*)buf = voteReply;
                vrep.SerializeToArray(buf + 2, vrep.ByteSizeLong());
                sendto(send_fd, buf, vrep.ByteSizeLong() + 2, 0, (const struct sockaddr *)&client_addr, sizeof(client_addr));
                break_flag = 1;
                state = FOLLOWER;
                break;
            }

            case voteReply: {
                VoteReply vrep;
                vrep.ParseFromArray(buf + 2, size - 2);
                if (vrep.term() == current_term) {
                    vote_count++;
                    if (vote_count >= node_num / 2 + 1) {
                        state = LEADER;
                        break_flag = 1;
                    }
                }
                break;
            }

            case leaderBeat: {
                LeaderBeat lb;
                lb.ParseFromArray(buf + 2, size - 2);
                if (lb.term() >= current_term) {
                    current_term = lb.term();
                    leader_id = lb.leaderid();
                    state = FOLLOWER;
                    break_flag = 1;
                }
                break;
            }

            case followerTimeout:
                break;

            case candidateTimeout:
                break_flag = 1;
                break;

            default:
                break;
        }
        if (break_flag)
            break;
    }
}

void leader()
{
    cout << "[INFO] STATE: Leader" << endl;
    set_timer(BROADCAST_TIME * 1000, leader_heartbeat);

    while (1) {
        struct sockaddr_in client_addr;
        socklen_t len;
        char buf[BUF_SIZE];
        short type;
        int size;
        int break_flag = 0;

        if ((size = recvfrom(listen_fd, buf, BUF_SIZE, 0, (struct sockaddr *)&client_addr, &len)) <= 0) {
            cerr << "[WARNING] Recv data failed" << endl;
            continue;
        }
        memcpy(&type, buf, 2);
        switch (type) {
            case voteRequest: {
                VoteRequest vr;
                vr.ParseFromArray(buf + 2, size -2);
                if (vr.term() <= current_term)
                    break;
                current_term = vr.term();
                VoteReply vrep;
                vrep.set_term(current_term);
                vrep.set_votegranted(true);
                *(short*)buf = voteReply;
                vrep.SerializeToArray(buf + 2, vrep.ByteSizeLong());
                sendto(send_fd, buf, vrep.ByteSizeLong() + 2, 0, (const struct sockaddr *)&client_addr, sizeof(client_addr));
                break_flag = 1;
                state = FOLLOWER;
                break;
            }

            case voteReply:
                break;

            case leaderBeat: {
                LeaderBeat lb;
                lb.ParseFromArray(buf + 2, size - 2);
                if (lb.term() > current_term) {
                    current_term = lb.term();
                    leader_id = lb.leaderid();
                    state = FOLLOWER;
                    break_flag = 1;
                }
                break;
            }

            case followerTimeout:
                break;

            case candidateTimeout:
                break;

            default:
                break;
        }
        if (break_flag)
            break;
    }

}

int main(int argc, char **argv) {
    struct sockaddr_in listen_addr;

    if (argc != 2) {
        cout << "Please use ./raft node_id\n"
            << "The nodo_id begins from 0, and should be the same with the order in the nodes.txt\n";
        return 0;
    }

    node_id = atoi(argv[1]);

    if (read_nodes("nodes.txt", node_list)) {
        cerr << "[ERROR] Can not read the nodes.txt" << endl;
        exit(-1);
    }
    node_num = node_list.size();

    if ((listen_fd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        cerr << "[ERROR] Can not create listen socket" << endl;
        exit(-1);
    }

    listen_addr.sin_family = AF_INET;
    listen_addr.sin_addr.s_addr = inet_addr("0.0.0.0");
    listen_addr.sin_port = htons(ELECTION_PORT);

    if (bind(listen_fd, (const struct sockaddr *)&listen_addr, sizeof(listen_addr)) < 0) {
        cerr << "[ERROR] Can not bind the socket" << endl;
        exit(-1);
    }

    self_addr.sin_family = AF_INET;
    self_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
    self_addr.sin_port = htons(ELECTION_PORT);
    if ((send_fd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        cerr << "[ERROR] Can not create self socket" << endl;
        exit(-1);
    }

    while (1) {
        switch (state) {
            case FOLLOWER:
                follower();
                break;
            case CANDIDATE:
                candidate();
                break;
            case LEADER:
                leader();
                break;
            default:
                break;
        }
    }

    return 0;
}
