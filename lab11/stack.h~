#include <iostream>

using namespace std;

template<class T>
class Stack 
{
        public:
                Stack(int = 10);
                Stack(const Stack<T>&);
                ~Stack();
                bool push(T);
                bool pop(T&);
                bool empty() const;
                bool full() const;
                bool clear();
        private:
                int max;
                int top;
                T* data;
};


template<class T>
Stack<T>::Stack(int length)
{
 	max = length;
 	top =0;
 	data = new T[max];
}
template<class T>
Stack<T>::Stack(const Stack<T>& object)
{
 	max = object.max;
 	top = object.top;
 	data = new T[max];
 		for(int j = 0; j <= top; j++)
 		{
 		 data[j] = object.data[j];
 		}
}

template<class T>
Stack<T>::~Stack()
{
 	delete[] data;
}


template<class T>                
bool Stack<T>::push(T object)
{
	 if(full()) 
	 {
	  return false;
	 }
	 else
	 {
	  top++;
	  data[top] = object;		 
	  return true;
 }
}

template<class T>
bool Stack<T>::pop(T& b)
{
 	if(empty()) 
 	{	
  	return false;
 	}
 		else 
 		{
  		b = data[top];	
  		top--;
  		return true;
  		}
}

template<class T>
bool Stack<T>::empty()const
{
 	if(top == 0)
 	{
 	 return true;
 	}
 		else
 		{
  		return false;
 		}
}

template<class T>
bool Stack<T>::full()const
{
	 if(top == max-1)
	 {
  		return true;
 	 }
 		else
 		{
  		return false;
 		}	
}

template<class T>
bool Stack<T>::clear()
{
 	if(!empty())
 	{
 	top = -1;
 	delete[] data;
 	data = new T[max];
 	return true;
 	}
 		else 
 		{
 		return false;
		}
}
