all:13a

13a: 13a.cpp arrayl.o nodel.o
	g++ 13a.cpp arrayl.o nodel.o -o run
	
arrayl.o: arrayl.cpp arrayl.h
	g++ -c -o arrayl.o arrayl.cpp
	
nodel.o: nodel.cpp nodel.h
	g++ -c -o nodel.o nodel.cpp
	
clean: 
	rm -rf *o 13a
	
