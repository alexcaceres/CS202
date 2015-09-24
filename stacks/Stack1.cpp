#include "stack.h"


Stack::Stack(int a)   // constructor
{

max = a;
top = 0;
actual = 0; 
data = new char[max];

}

Stack::Stack(const Stack& a)   // copy constructor
{
	max = a.max;
	top = a.top;
	actual = a.actual;
	data = new char[max];
for( int i = 0; i < actual; i++)
	{
	data[i] = a.data[i];

	}
}


Stack::~Stack()		// deconstructor
{
	delete[] data;
}


Stack& Stack::operator=(const Stack& object)		
{
	if(!object.empty() && this != &object)
	{
		max = object.max;
		top = object.top;
		actual = object.actual;
		if(data != NULL)			// deletes memory
		{
			delete[] data;
		}
		data = new char[object.max];
		
		for(int k = top; k < actual; k++)
			{
				data[k] = object.data[k];
			}
	}
return *this;
}


bool Stack:: push(char b)			// push function
{
	if(full()) 
	{
	cout << "Stack Full" << endl;			// stack full
	return false;
	}
	else
	{
	for(int i = actual; i > 0; i--)
	{
	data[i] = data[i-1];
	}
	data[top] = b;
	actual++;		// incrementing actual
	

	return true;
	}
}

bool Stack:: pop(char& c)
{
		if(empty()) {
			cout << "Stack Empty!" << endl;  // pops values
			return false;
			}
	else {
		c = data[top];
			
		for(int i = 0; i < actual; i++)
		{
		data[i] = data[i+1];
		}	
		
		actual--;
		return true;
	}
	
}

bool Stack:: empty() const
{
if(actual == 0)
{
	return true;
}
		else
		{
		return false;
		}

}

bool Stack:: full() const

{
if(actual == max)
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
	top = 0;
	actual = 0;
	data = new char[max];
	return true;
	}
		else {
		return false;
		}
}
bool Stack:: operator==(const Stack& object) const		// comparison
{
bool equal = false;
int k = 0;
	if(!empty() && !object.empty())
	{
		while( k < actual && k < object.actual)
		{
			if(data[k] == object.data[k])
			{
				equal = true;
				k++;
			}
				else
				{
				equal = false;
				break;
				}
		}
	}
		if(empty() && object.empty())
		{
			return true;
		}
	return equal;
}
ostream& operator<<(ostream& out, const Stack& object)   // prints out data
{

	if(!object.empty())
	{
	out << "Data" << endl;
		for( int i = 0; i < object.actual; i++)
		{
		out << "" << object.data[i] << endl;
		}
	return out;
	}
		else
		{
			out << "No output" << endl;
			return out;
		}
}
