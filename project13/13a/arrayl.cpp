#include "arrayl.h"


ListA:: ListA(int a)   // constructor
{
size = a;
cursor = -1;
actual = 0;
data = new int[size];
}

ListA:: ListA(const ListA& obj)  // copy constructor
{

size = obj.size;
data = new int[size];
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


ListA:: ~ListA()   // deconstructor
{
	delete[] data;
}

bool  ListA:: gotoBeginning()  // sends the cursor to the beginning
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

bool ListA:: gotoEnd()  // sends cursor to end
{
	bool end = false;
	for(int i = 0; i < actual; i++)
		{
			cursor++;
			end = true;
		}
		return end;
		
	
}

bool ListA:: gotoNext() // goes to next position
{
	/*if(!empty() && cursor < actual-1)
	{
	cursor++;
	return true;
	}
	else
	{
	return false;
	}*/
	
	if(!empty())
		{
		cursor++;
		return true;
		}
		else
		{
		return false;
		}
		
}

bool ListA:: gotoPrior() // goes to previous position
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

bool ListA:: insert(int obj)
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
bool ListA:: remove(int& obj)
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

bool ListA:: empty() const
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

bool ListA:: full() const
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

bool ListA:: clear()
{
if(!empty())
	{
	delete[] data;
	cursor = -1;
	actual = 0;
	data = new int[size];
	return true;
	}
		else {
		return false;
		}
}



ListA& ListA:: operator=(const ListA& list)
{
 if(this != &list)
	{
		size = list.size;
		if(data != NULL)			// deletes memory
		{
			delete[] data;
		}
		data = new int[size];
		
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

int ListA:: getData(int index) const
{
return data[index];
}

ostream& operator<<(ostream& out, const ListA& list)
{
	
	if(!list.empty())
	{
		out << "Data " << endl;
		for(int i = 0; i < list.actual; i++)
			{
				out << " " << endl << list.data[i];
				if(i == 0)
				{
				out << "--head";
				}
		if(i == list.cursor)
		{
		out << "--cursor";
		}
		}	
		}
	return out;
} 
