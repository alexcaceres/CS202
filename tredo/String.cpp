#include "String.h"

String:: String (int a)
{
	bufferSize = a;
	buffer = new char[bufferSize];
	buffer[0] = '\0';
}

String:: String (const char* b)
{
	int a = 0;
	while(b[a] != '\0')
	{
		a++;
	}
	bufferSize = a + 1;
	buffer = new char[bufferSize];
		for(int a = 0; a < bufferSize; a++)
			{
				buffer[a] = b[a];
			}
	
}


String:: String ( const String& b)
{
	bufferSize = b.bufferSize;
	buffer = new char[bufferSize];
	for(int i = 0; i < bufferSize; i++)
		{
		buffer[i] = b.buffer[i];
		}
}


String:: ~String()
{
	delete[] buffer;
	buffer = NULL;
}

int String:: getLength() const
{
	int length = 0;
	while( buffer[length] != '\0')
		{
			length++;
		}
	return length;
}

bool String:: empty() const
{
	return (getLength() == 0);
}

bool String:: clear()
{
	if(!empty())
		{
			delete[] buffer;
			buffer = new char[bufferSize];
			buffer[0] = '\0';
			return true;
		}
			else {
			return false;
			 }
}

String& String:: operator=(const String& ob)
{
	if(this != &ob)							// check if same size, else deallocate, allocate and deep copy
		{
		bufferSize = ob.bufferSize;
		buffer = new char[bufferSize];
		for(int i = 0; i < bufferSize; i++)
		{
		buffer[i] = ob.buffer[i];
		}	
			/*if(buffer != NULL)
			{
				delete[] buffer;
			}*/
	}
	return *this;
}

char String::operator [] (int i) const
{

	if(empty())       
	{
		return '\0';
	}
		else if(i >= 0 && i < getLength())
			{
				return buffer[i];
			}
		else 
			{
				return '\0';					
			}
}


bool operator + (String& one, const String& two)
{
		String temp(one);
		int i = 0;
		
		one.bufferSize= one.getLength() + two.getLength() +1;
		delete[] one.buffer;
		one.buffer = new char[one.bufferSize]; 	
			while(temp.buffer[i] != '\0')
 			{
 	 		one.buffer[i] = temp.buffer[i];
 	 		i++;
			}
			
			int j = 0;
			while(two.buffer[j] != '\0')
 			{
 	 		one.buffer[i] = two.buffer[j];
 	 		i++;
 	 		j++;
			}
	return true;
}


istream& operator>>(istream& in, String& string)
{
		char* temp = new char[100];
		in >> temp;
		string = temp;
		delete[] temp;
		temp = NULL;
		return in;
}

ostream& operator<<(ostream& out, String& string)
{
	if(!string.empty())
	{
	out << string.buffer;
	}
	
	return out;
}



	
