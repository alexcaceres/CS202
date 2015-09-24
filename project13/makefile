all:13b

13b: 13b.cpp person.o student.o employee.o
	g++ 13a.cpp person.o student.o employee.o -o run
	
person.o: person.cpp person.h
	g++ -c -o person.o person.cpp
	
student.o: student.cpp student.h
	g++ -c -o student.o student.cpp
	
employee.o: employee.cpp employee.h
	g++ -c -o employee.o employee.cpp
	
clean: 
	rm -rf *o 13b


