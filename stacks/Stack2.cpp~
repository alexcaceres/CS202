#include "stack.h"




Stack::Stack(int a)   // constructor
{

max = a;
top = -1;
data = new char[max];

}

Stack::Stack(const Stack& object)   // copy constructor
{
	max = object.max;
	top = object.top;
	data = new char[max];
for( int i = 0; i <= top; i++)
	{
	data[i] = object.data[i];

	}
}


Stack::~Stack()     // deconstructor
{
delete[] data;
}

Stack& Stack::operator=(const Stack& object)
{
if(this != &object)
{
	max = object.max;
	top = object.top;
	if(data != NULL)
		{
			delete[] data;
		}
	data = new char[object.max];
	for( int i = 0; i <= object.top; i++)
	{
		data[i] = object.data[i];
	}
	
}
	return *this;
}

bool Stack:: push(char b)   // push function
{
	if(full()) 
	{
	cout << "Stack Full" << endl;
	return false;
	}
	else {
	top++;
	data[top] = b;
	return true;
		}
}

bool Stack:: pop(char& c)			// pop function
{
		if(empty()) {
			cout << "Stack Empty!" << endl;
			return false;
			}
		else {
		c = data[top];		// decrementing
		top--;
		
		return true;
	}
	
}
bool Stack:: empty() const
{
if(top == -1)
{
return true;
}
	else {
	return false;
	}
}

bool Stack:: full() const

{
if(top == (max-1))
	{
	return true;
	}
		else 
		{
			return false;
		}
}
bool Stack:: clear()
{
if(!empty())
	{
	delete[] data;
	top = -1;
	data = new char[max];
	return true;
	}
		else {
		return false;
		}
}
bool Stack:: operator==(const Stack& object) const
{
			if(top != object.top)
			{
				return false;
			}
				for(int i =0; i <= top; i++)
				{
				if(data[i] != object.data[i])
				{
					return false;
				}
				}
	if(empty() && object.empty())			// comparison for empty
		{
			return true;
		}
		return true;
}
ostream& operator<<(ostream& out, const Stack& object)    // prints out Top and values
{
	out << "Top: " << endl;
	for(int i = object.top; i >= 0; i--)
	{
		out << object.data[i] << endl;
	}
	return out;
}
