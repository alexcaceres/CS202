#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "string_library.h"


using namespace std;

struct machine {
 char *name = NULL;		// changed to dynamic memory
 int bonusvalues;
 bool exists;
};

struct reel {    // second added struct
machine *rows;	// rows of type machine
int stop;


};


void readin( machine* sptr);                                  // function prototypes
void reelfill(reel* rptr, machine* sptr);
void writescreen (reel* rptr, machine* sptr);
void menu( reel* rptr, machine* sptr);
void findsymbol( reel* rptr, machine* sptr);


int main()
{

srand(time(NULL));     // in order to randomize my slot machine function




reel* rptr = new reel[3];			// pointers pointing to my two arrays
machine* sptr = new machine[6];

reel r;
r.rows = new machine[10];		// array for name of symbols
machine m;
m.name = new char[10];			// array for stops in reels
	


readin(sptr);
menu(rptr, sptr);


delete [] rptr;
delete [] sptr;
return 0;


}

void menu( reel* rptr, machine* sptr)
{
int selection;
bool occupied;    // keeps users from choosing a menu option before configurating
do {
        cout << "  Slot machine reel" << endl;
        cout << "  1. Populate a new slot machine " << endl;
        cout << "  2. Print machine configuration to screen"<< endl;
        cout << "  3. Choose reel number (0-2) and stop number from (0-9): " << endl;
cout << "  4. QUIT" << endl;
        cin >> selection;

        switch (selection)
        {
            case 1:       // menu options 
               reelfill(rptr, sptr);
		occupied = true;
                break; 
            case 2:
                if(occupied == true)
		{
		writescreen(rptr, sptr); 
		}
	else {
cout << "No slot machine configuration has been chosen. Please choose 1" << endl; }
                break;
       case 3: 
		if(occupied == true)
		{
		findsymbol(rptr, sptr);
		}
		else {
		cout << "No slot machine configuration has been chosen. Please choose 1" << endl; }
	break;
	case 4: cout << "Goodbye! /n";
	exit(8);       // exits the menu and program
	break;
	default: cout << selection << " is not a valid menu item. Please choose a valid number.\n";  // does not allow for a number besides 1-4 to be chosen
        }
    } while (selection != 0 );
}


void readin(machine* sptr)  // reads in the symbols file 
{
	char *filename = new char[7];
	              			// manually asks for the filename of symbols
	cout << "Enter filename: " << endl;	// reads in the file correctly
	cin >> filename;
	ifstream fin;
	fin.open(filename);

		char* temp = new char[20];       // temporary array to read in info to array
		for(int i = 0; i < 6; i++)
		{
		fin >> temp >> (*sptr).bonusvalues;
		strlength(temp);
		(*sptr).name = new char[strlength(temp)+1];
		stringcopy((*sptr).name, temp);
		
		if((*sptr).bonusvalues != 0)		// checks if bonus value is equal to 0
		{
		(*sptr).exists = true;
		}
		else
		{
		(*sptr).exists = false;
		}
 		cout << (*sptr).name << " " << (*sptr).bonusvalues << endl;
		sptr++;
		}

	fin.close();
	delete[] temp;
	delete[] filename;
	
}

void reelfill (reel* rptr, machine* sptr)
{
	
	
	for(int i = 0; i < 3; i++)        // loops through to fill the reel
	{
	(*rptr).rows = new machine[8];
	machine *row_ptr;
	row_ptr=(*rptr).rows;			
	for(int j = 0; j < 10; j++)
	{ 
	(*row_ptr).name = new char[8];
	
 	int number = rand() %6;		// randomizes my reelfill
	int k=0;
	while(k < number)
	{
	sptr++;
	k++;
	}
		
 	stringcopy((*row_ptr).name, (*sptr).name);		// access my string copy
	//cout << (*sptr).name << (*sptr).bonusvalues << endl;
 	(*row_ptr).bonusvalues = (*sptr).bonusvalues;


	int l = 0;
	while(l < number)
	{
	sptr--;
	l++;
	}
	row_ptr++;
	}
	rptr++;	
      }
	
}



void writescreen (reel* rptr, machine* sptr) 
{
	machine* row_ptr = (*rptr).rows;
	cout << "------------------" << endl;
	  for(int i = 0; i < 3; i++)   // writes file to screen
	    {
		for( int j = 0; j < 9; j++)
		{
		cout << (*row_ptr).name << (*row_ptr).bonusvalues << "    ";		// attempted to line it up
                if(j == 2 || j == 5 || j == 8)
                {
                 cout << "\n";
                }
		row_ptr++;
		}
		int l = 0;
			while(l < 9)
			{
			row_ptr--;
			l++;
    	}
	    }
}

void findsymbol(reel* rptr, machine* sptr)   // function to choose a specific symbol and bvalue
{					
	
	machine *row_ptr;
	int column;
	int row;
	cout << " Choose reel and stop number: ? " << endl; 
	cin >> column >> row;
		if(column > -1 && column < 3 && row > -1 && row < 10)  // sets limit to what numbers can be chosen
	{
		
		for(int a = 0; a < column; a++){
			rptr++;			// increment pointers
		}
		row_ptr = (*rptr).rows;
		for(int b = 0; b < row; b++){	
			row_ptr++;
		}
		cout << "The symbol is: " << (*row_ptr).name << endl;
			if((*row_ptr).bonusvalues > 0)
			{
			if((*row_ptr).exists = true)
			{
			cout << "The bonus value is: " << (*row_ptr).bonusvalues << endl;
			cout << "Boolean: " << (*row_ptr).exists << endl;		
			}
			}
			
			else
			{
			cout << "There is no bonus value." << endl;			// checks for true or false
                        cout << "Boolean: " << (*row_ptr).exists << endl;
			} 
			}
			else
			{ 
			cout << " That is not a valid number" << endl;
			}	


		}	
	

