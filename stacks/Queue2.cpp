#include "queue.h"



Queue:: Queue(int i)    // constructor

{
max = i;
front = rear = -1;
data = new int[max];

}

Queue:: Queue(const Queue& s)	// copy constructor

{
max = s.max;
front = s.front;
rear = s.rear;
data  = new int[max];

for( int i = 0; i <= rear; i++)
{
	data[i] = s.data[i];

}

}
Queue:: ~Queue()		// destructor

{
delete[] data;

}


Queue& Queue:: operator=(const Queue& a)

{
if(this != &a)
	{
		max = a.max;
		front = a.front;
		rear = a.rear;
		if(data != NULL)
		{
			delete[] data;
		}
			data = new int[max];
			for(int i = 0; i < a.max; i++)
				{
					data[i] = a.data[i];
				}
	}
	return *this;	
}

bool Queue::enqueue(int b)		// increments rear
{
		if(full())
		{
			return false;
		}
			else
			{
			
			rear++;
			data[rear % max] = b;
			
		}
	return true;
}


bool Queue::dequeue(int& b)		
{
		if(empty())
		{
			return false;
		}
				else {
        				front++;
					b = data[front % max];
					return true;
		}
	
}
		


bool Queue:: empty() const
{
	return (front == rear);
}             

bool Queue:: full() const
{
	
	return ((rear - front) == max);
		
}

bool Queue:: clear()			// empty deletes all values
{
if(!empty())
	{
		delete[]data;
		front = rear = -1;
		data = new int[max];
		return true;
	}
		else
		{
			return false;
		}
}


bool Queue::operator==(const Queue& a) const
{
bool equal = false;
int k1 = front + 1;
int k2 = a.front + 1;
if( rear - front != a.rear - a.front)
	{
	return false;
 	}
	
	
	if(!empty() && !a.empty())
	{
		while( k1 <= rear)
		{
			if(data[k1%max] == a.data[k2%max])
			{
				equal = true;
				k1++;
				k2++;
			}
				else
				{
				equal = false;
				break;
				}
		}
	}
	if(empty() && a.empty())
		{
			return true;
		}
	return equal;
}


ostream& operator<<(ostream& out, const Queue& d)   // friend

{
	int begin = d.front +1;
	if(!d.empty())
	{
	out << "Data";
		for( int i = begin; i <= d.rear; i++)
		{
		out << " " << d.data[i%d.max] << endl;
		}
	}
	return out;
	
}	
