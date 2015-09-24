#include "person.h"

person::person()
{
 first = NULL;
 last = NULL;
 ssn = NULL;
 age = 0;
 }
 
person:: ~person()
{
if(first != NULL)
 	{
 	delete[] first;
 	}
		 if(last != NULL)
 			{
 			delete[] last;
 			}
}

char* person:: getfirst() const
{
return first;
}

char* person:: getlast() const
{
return last;
}
		
int* person:: getssn() const
{
return ssn;
}

int person:: getage() const
{
return age;
}

void person::setssn(int* a)
{
if(ssn != NULL)
	{
		delete[] ssn;
	}
		ssn = new int[9];
		for( int i = 0; i < 9; i++)
			{
			ssn[i] = a[i];
			}
}

void person::setfirst(char* b)
{
if(first != NULL)
	{
		delete[] first;
	}
	int i = 0;
	while(b[i] != '\0') {
	    i++;
	}	
		first = new char[i+1];
		int j = 0;
		while(b[j] != '\0')
		{
	 	first[j] = b[j];
	 	j++;
		}
		first[j] = '\0';
}

void person::setlast(char* b)
{
if(last != NULL)
	{
		delete[] last;
	}
	int i = 0;
	while(b[i] != '\0') {
	    i++;
	}	
		last = new char[i+1];
		int j = 0;
		while(b[j] != '\0')
		{
	 	last[j] = b[j];
	 	j++;
		}
		last[j] = '\0';
		
}


void person::setage(int d)
{
if(d >= 0)
	{
		d = age;
	}
	else
	{
		age = 0;
	}
}

void person::printp()
{
cout << endl << "Name: " << first << " " << last << " " << "Age: " << age << " " << endl;
cout << "SSN:";
for(int i = 0; i < 5; i++)
	{
	cout << ssn[i];
	}
	cout << " ";
}
