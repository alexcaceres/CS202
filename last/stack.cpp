#include "stack.h"


Stack::Stack()
{

}
 
Stack::Stack(const Stack& stack)
{
  data = stack.data; 
}

Stack& Stack::operator=(const Stack& stack)
{
 	if(this != &stack)
 	{	
  	data = stack.data;
 	}
 	return *this;
}

bool Stack::push(int a)
{
 	data.push_back(a);
 	return true;
}

bool Stack::pop(int& d)
{
 if(empty())
 	{
 	 return false;
 	}
 		else
 		{
 		 data.pop_back();
 		 return true;
 		}
}

bool Stack::empty() const
{
	 if(data.size() == 0)
 	 {
 	 return true;
 	 }
 		else
 		{
 		return false;
 		}
}

bool Stack::clear()
{
 	if(empty())
 	{
  	return false;
 	}
 		else
 		{
 		data.clear();
 		return true;
 		}
}

ostream& operator<<(ostream& out, const Stack& c)
{
 	for(int i = 0; i < c.data.size(); i++)
 	{
  	out << c.data[i];
 	}
 	return out;
}
