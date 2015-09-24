#include "queue.h"

Queue:: Queue(int i)   // constructor

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

data = new int[max];
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
		rear = a.rear;
		front = a.front;
	if(data != NULL)
		{
			delete[] data;
		}
			data = new int[max];
			for(int i = 0; i <= rear; i++)
				{
					data[i] = a.data[i];
				}
	}
		return *this;
}

bool Queue::enqueue(int b)		
{
		if(front == -1)
			{
				front++;
			}
		if((rear + 1) < max)
		{
			rear++;
			data[rear] = b;
			cout << rear << endl;
			return true;
		}	
			else
			{
				return false;
			}
}


bool Queue::dequeue(int& b)
{
		if(front != -1)
		{
			b = data[front];
			rear--;
		} else {
			return false;
		}
		if(rear != -1)
		{
			for(int j = 0; j <= rear; j++)    // <=
			{
				data[j] = data[j+1];
			}
		}
		else {
		front = rear;
		}

		return true;
}
		




bool Queue:: empty() const
{
	return (front == rear);
}             

bool Queue:: full() const
{
	if(rear+1 == max)
	{
	return true;
	}
		else 
		{
			return false;
		}
}

bool Queue:: clear()
{
if(!empty())
	{
		delete[] data;
		front = rear = -1;
		data = new int[max];
		return true;
	}
		else
		{
			return false;
		}
}


bool Queue::operator==(const Queue& a) const   // comparison
{
bool equal = false;
int k = 0;
	if(!empty() && !a.empty())
	{
		while( k <= rear && k <= a.rear)
		{
			if(data[k] == a.data[k])
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
	if(empty() && a.empty())
		{
			return true;
		}
	return equal;
}


ostream& operator<<(ostream& out, const Queue& d)

{
	int start = d.front;
	if(!d.empty())
	{
	out << "Data";
		for( int i = start; i <= d.rear; i++)
		{
		out << " " << d.data[i] << endl;
		}
	return out;
	}
		else
		{
			out << "No output" << endl;
			return out;
		}
}




