raft: main.cc raft.pb.cc
	g++ -lprotobuf -lpthread -o raft main.cc raft.pb.cc
raft.pb.cc: raft.proto
	protoc --cpp_out=. raft.proto
clean:
	rm raft.pb.h raft.pb.cc raft
