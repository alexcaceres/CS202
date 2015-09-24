#include "person.cpp"
#include "student.cpp"
#include "employee.cpp"
#include <iostream>
#include <cstdlib>
#include <fstream>


using namespace std;

int* readinint(char* temp, int size);

int main()

{

student* students = new student[6];
employee* employees = new employee[7];

	int i = 0;
	int j = 0;

	char* temp = new char[50];
	double gpa;
	int* data = NULL;
	char personType;
	char dummy;

	ifstream fin;
	fin.open("persons");
	fin >> personType >> dummy;
	while(fin.good())
	{
		
		if(personType == 's')
		{
	        // first
    	   	 fin.getline(temp, 50, ':');
			students[i].setfirst(temp);
			// second	
			fin.getline(temp, 50, ':');
			students[i].setlast(temp);
			//age
			fin.getline(temp, 50, ':');
			students[i].setage(atoi(temp));
			// ssn
			fin.getline(temp, 50, ':');
			data = new int[9];
			data = readinint(temp, 9);
			students[i].setssn(data);
			delete[] data;
			data = NULL;
			//nshe
			fin.getline(temp, 50, ':');
			data = new int[10];
			data = readinint(temp, 10);
			students[i].setnshenumber(data);
			delete[] data;
			data = NULL;
			// major
			fin.getline(temp, 50, ':');
			students[i].setmajor(temp);
			// gpa
			fin >> gpa;
			students[i].setgpa(gpa);
			students[i].printp();
			students[i].prints();
			fin >> personType >> dummy;
			i++;
		}
		else if(personType == 'e')
		{
			fin.getline(temp, 50, ':');
			employees[j].setfirst(temp);
			// last name
			fin.getline(temp, 50, ':');
			employees[j].setlast(temp);
			// age
			fin.getline(temp, 50, ':');
			employees[j].setage(atoi(temp));
			cout << temp << endl;
			//ssn
			fin.getline(temp,50,':');
			data = new int[9];
			data = readinint(temp, 9);
			employees[j].setssn(data);
			delete[] data;
			data = NULL;
			// employee number
			fin.getline(temp, 50, ':');
			data = new int[5];
			data = readinint(temp, 5);
			employees[j].setempnumber(data);
			delete[] data;
			data = NULL;
			// title
			fin.getline(temp,50, ':');
			employees[j].settitle(temp);
			// salary
			fin.getline(temp, 50, '\n');
			employees[j].setsalary(atoi(temp));
			employees[j].printp();
			employees[j].printe();
			fin >> personType >> dummy;
			
			//cout << dummy << endl;
			j++;
		}
		
	}
		
}
		
int* readinint(char* temp, int size)
{
int* result = new int[size];

	for( int i =0; temp[i] != '\0'; i++){

		result[i] = temp[i] - '0';
	}

	return result;
		
		}

