#include "employee.h"

employee::employee()
{
 empnumber = NULL;
 title = NULL;
 salary = 0;
 }
 
employee:: ~employee()
{
if(empnumber != NULL)
 	{
 	delete[] empnumber;
 	}
		 if(title != NULL)
 			{
 			delete[] title;
 			}
}

int* employee:: getempnumber() const
{
return empnumber;
}

char* employee:: gettitle() const
{
return title;
}
		
int employee:: getsalary() const
{
return salary;
}

void employee::setempnumber(int* a)
{
if(empnumber != NULL)
	{
		delete[] empnumber;
	}
		empnumber = new int[5];
		for( int i = 0; i < 5; i++)
			{
			empnumber[i] = a[i];
			}
}

void employee::settitle(char* b)
{
if(title != NULL)
	{
		delete[] title;
	}
	int i = 0;
	while(b[i] != '\0') {
	    i++;
	}	
		title = new char[i+1];
		int j = 0;
		while(b[j] != '\0')
		{
	 	title[j] = b[j];
	 	j++;
		}
		title[j] = '\0';
}

void employee::setsalary(int d)
{
if(d >= 0)
	{
		d = salary;
	}
	else
	{
		salary = 0;
	}
}

void employee::printe()
{

cout << "Title: " << title << " " << " " << "Salary: " << salary << endl;
cout << "Employee Number: ";
for(int i = 0; i < 5; i++)
	{
	cout << empnumber[i];
	}
}
