#include "listA.h"


List:: List(int a)   // constructor
{
size = a;
cursor = -1;
actual = 0;
data = new char[size];
}

List:: List(const List& obj)  // copy constructor
{

size = obj.size;
data = new char[size];
cursor = obj.cursor;
actual = obj.actual;

		if(obj.data != NULL)
		{
			for(int j = 0; j < actual; j++)
			{
				data[j] = obj.data[j];
			}
		}

	

}


List:: ~List()   // deconstructor
{
	delete[] data;
}

bool  List:: gotoBeginning()  // sends the cursor to the beginning
{
	if(!empty())
		{
		bool front = false;
		for( int i = cursor; i > 0; i--)
		{
			cursor--;
			front = true;
		}
			return front;
		}
}

bool List:: gotoEnd()  // sends cursor to end
{
	bool end = false;
	for(int i = 0; i < actual; i++)
		{
			cursor++;
			end = true;
		}
		return end;
}

bool List:: gotoNext() // goes to next position
{
	if(!empty() && cursor < actual-1)
	{
	cursor++;
	return true;
	}
	else
	{
	return false;
	}
		
}

bool List:: gotoPrior() // goes to previous position
{
	if(!empty() && cursor != 0)
	{
		cursor--;
		return true;
	}
	else
	{
	return false;
	}
}

bool List:: insert(char obj)
{

	if(!full())
	{
		if(cursor +1 != size-1)
			{
				int i = actual-1;
				while(i > cursor)
				{
				data[i+1] = data[i];
				i--;
				}
			}
	
		data[cursor+1] = obj;
		cursor++;
		actual++;
		return true;
	}
		else
		{
			return false;
		}
}
bool List:: remove(char& obj)
{
	if(!empty())
		{
		obj = data[cursor];
		int i = cursor;
		while(i < actual -1)
			{
				data[i] =  data[i+1];
				i++;
			}
		
				
		if(cursor == actual)
			{
					gotoBeginning();
			}
			actual--;	
	return true;
		}
	else {
	return false;
	}

}

bool List:: empty() const
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

bool List:: full() const
{
if(actual == size)
	{
	return true;
	}
		else 
		{
			return false;
		}
}

bool List:: clear()
{
if(!empty())
	{
	delete[] data;
	cursor = -1;
	actual = 0;
	data = new char[size];
	return true;
	}
		else {
		return false;
		}
}
List& List:: operator=(const List& list)
{
 if(this != &list)
	{
		size = list.size;
		data = new char[size];
		if(data != NULL)			// deletes memory
		{
			delete[] data;
		}
		
		if(!list.empty())
		{
		cursor = list.cursor;
		actual = list.actual;
		for(int k = 0; k < actual; k++)
			{
				data[k] = list.data[k];
			}
		}
		else {
		cursor = -1;
		actual = 0;
		}
	}
return *this;

}

ostream& operator<<(ostream& out, const List& list)
{
	out << "Index cursor" << list.cursor << endl;
	out << "Elements in list" << list.actual << endl;
	out << "Max capacity" << list.size << endl;
	if(!list.empty())
	{
		out << "Data " << endl;
		for(int i = 0; i < list.actual; i++)
			{
				out << " " << list.data[i] << endl;
			}
	}
	return out;
} 
