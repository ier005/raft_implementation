raft: main.cc raft.pb.cc
	c++ -o raft main.cc raft.pb.cc -lprotobuf -lpthread 
raft.pb.cc: raft.proto
	protoc --cpp_out=. raft.proto
clean:
	rm -f raft.pb.h raft.pb.cc raft
