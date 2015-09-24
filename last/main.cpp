#include "stack.h"

int main()
{
	int testItem;
	Stack stack, assignmentTestStack;

	cout << endl << endl << "Testing push and pop" << endl;

	stack.push(1);
	cout << stack << endl;

	stack.push(2);
	cout << stack << endl;

	stack.pop(testItem);
	cout << stack << endl;

	stack.push(5);
	cout << stack << endl;

	stack.push(4);
	cout << stack << endl << endl;

	Stack copyConstructorTestStack(stack);

	assignmentTestStack = stack;

	cout << "Original stack" << endl;
	cout << stack << endl << endl;
	cout << "Stack created with copy constructor" << endl;
	cout << copyConstructorTestStack << endl << endl;
 	cout << "Stack created with overloaded assignment operator" << endl;
	cout << assignmentTestStack << endl << endl;

	if(!stack.empty()) {
		cout << "Stack is not empty!\n";
	}
	else {
		cout << "Error in empty function\n";
	}

	cout << "Clearing stack...\n";
	stack.clear();

	if(stack.empty()) {
		cout << "Stack is empty!\n";
	}
	else {
		cout << "Error in clear function\n";
	}

	cout << endl << endl;

	return 0;
}
