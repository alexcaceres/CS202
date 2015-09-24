all: main

main:	main.cpp class.o string_library.o
	g++ main.cpp class.o string_library.o -o main

class.o:	class.cpp class.h
	g++ -c -o class.o class.cpp

string.o:	string_library.cpp string_library.h
	g++ -c -o string_library.o string_library.cpp

clean: rm -rf *.o main
