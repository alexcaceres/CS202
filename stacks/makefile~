
all: stack_main testQueue testList

stack_main: stack_main.cpp
	   g++ -g stack_main.cpp -o stack

testQueue: testQueue.cpp
		g++ -g testQueue.cpp -o queue

testList: testList.cpp
		g++ -g testList.cpp -o list

clean:
		rm -rf *.o stack_main testQueue testList
