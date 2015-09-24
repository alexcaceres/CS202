#include "stackA.h"


Node:: Node (char c, Node* node)   
{
	data = c;
	next = node;
}

Stack::Stack(int a)   // constructor
{

top = NULL;

}

Stack::Stack(const Stack& object)   // copy constructor
{
	if(!object.empty())
		{
			Node* temp;
			Node* tempy;
			temp = object.top;
			tempy = top = new Node(temp->data, NULL);
			temp = temp->next;
			while(temp != NULL)
				{
					tempy -> next = new Node(temp->data, NULL);
					tempy = tempy->next;
					temp = temp->next;
					
				}
		}
	else
	{
		top = NULL;
	}
		
}


Stack::~Stack()     // deconstructor
{
	clear();
}

Stack& Stack::operator=(const Stack& object)
{
	if(this != &object)
	{
	if(top != NULL)
	{
	delete top;
	}
	if(!object.empty())
		{
			Node* temp;
			Node* tempy;
			temp = object.top;
			tempy = top = new Node(temp->data, NULL);
			temp = temp->next;
			while(temp != NULL)
				{
					tempy->next = new Node(temp->data, NULL);
					tempy = tempy->next;
					temp = temp->next;
				}
		}
	else
	{
		top = NULL;
	}
		
}
	return *this;
}

bool Stack:: push(char b)   // push function
{
	if(empty()) 
	{
	top = new Node(b ,NULL);
	
	}
	else {
	Node* temp;
	temp = new Node(b, top);
	top = temp;
		}
		
	return true;
		
}

bool Stack:: pop(char& c)			// pop function
{
		if(!empty()) {
			Node* temp;
			temp = top = top-> next;
			delete temp;
			return true;
			}
		else {
		return false;
	}
	
}
bool Stack:: empty() const
{
return(top == NULL);

}


bool Stack:: full() const

{
return false;
}

bool Stack:: clear()
{
if(!empty())
	{
		while(top != NULL)
		{
		Node* temp = top;
		top = top->next;
		delete temp;
		}
	return true;
	}
		else {
		return false;
		}
}

bool Stack:: operator==(const Stack& object) const
{
			Node* temp = top;
			Node* second = object.top;
			while(temp != NULL && second != NULL)
			{
				if(temp->data != second->data)
				{
					return false;
				}
				temp = temp-> next;
				second = second->next;
			}
				
				if(temp == NULL && second == NULL)
				{
					return true;
				}
				else
				{
					return false;
				}
}

ostream& operator<<(ostream& out, const Stack& stack)
{
	Node* temp = stack.top;
	while(temp != NULL)
	{
		out << temp->data;
		
	if( temp == stack.top)
		{
		out << "Stack Top: ";
		}
		temp = temp-> next;
		out << endl;
	
	}
		return out;
}

