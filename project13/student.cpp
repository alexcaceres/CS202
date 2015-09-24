#include "student.h"

student::student()
{
 nshenumber = NULL;
 major = NULL;
 gpa = 0.0;
 }
 
student:: ~student()
{
if(nshenumber != NULL)
 	{
 	delete[] nshenumber;
 	}
		 if(major != NULL)
 			{
 			delete[] major;
 			}
}

int* student:: getnshenumber() const
{
return nshenumber;
}

char* student:: getmajor() const
{
return major;
}
		
double student:: getgpa() const
{
return gpa;
}

void student::setnshenumber(int* a)
{
if(nshenumber != NULL)
	{
		delete[] nshenumber;
	}
		nshenumber = new int[10];
		for( int i = 0; i < 10; i++)
			{
			nshenumber[i] = a[i];
			}
}

void student::setmajor(char* b)
{
if(major != NULL)
	{
		delete[] major;
	}
	int i = 0;
	while(b[i] != '\0') {
	    i++;
	}	
		major = new char[i+1];
		int j = 0;
		while(b[j] != '\0')
		{
	 	major[j] = b[j];
	 	j++;
		}
		major[j] = '\0';
}

void student::setgpa(double d)
{
if(d >= 0)
	{
		d = gpa;
	}
	else
	{
		gpa = 0;
	}
}

void student::prints()
{
cout << endl << "Name: " << first << " " << last  << " " << endl << "Age: "  << age   << " " << endl;
cout << "Major: " << major << " " << "GPA: " << gpa << endl;
cout << "NSHE: ";
for(int i = 0; i < 10; i++)
	{
	cout << nshenumber[i];
	}
}

		
