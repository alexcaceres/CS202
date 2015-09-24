#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "class.h"
#include "string_library.h"


using namespace std;


void readin(symbol* sptr);                                  // function prototypes
void reelfill(symbol* sptr, reel* rptr);
int spinslot( symbol* sptr, reel* rptr);
void menu(symbol* sptr, reel* rptr);
void findsymbol( symbol* sptr, reel* rptr);


int main()
{

srand(time(NULL));     // in order to randomize my slot machine function
symbol *sptr = new symbol[6];
reel *rptr = new reel[3];

readin(sptr);
menu(sptr, rptr);


for(int i = 0; i <6; i++)
	{
		delete[] sptr;
		sptr++;
		}

for(int j =0; j < 3; j++)
{
	delete[] rptr;
	rptr++;
}


sptr = NULL;


rptr = NULL;



return 0;


}

void menu( symbol* sptr, reel* rptr)
{
int selection;
bool occupied = false;    // keeps users from choosing a menu option before configurating
do {
        cout << "  Slot machine reel" << endl;
        cout << "  1. Populate a new slot machine " << endl;
        cout << "  2. Print machine configuration to screen"<< endl;
        cout << "  3. Choose reel number (0-2) and stop number from (0-9): " << endl;
	cout << "  4. Spin the reel" << endl;
	cout << "  5. QUIT" << endl;
        cin >> selection;

        switch (selection)
        {
            case 1:       // menu options 
	
               reelfill(sptr,rptr);
		occupied = true;
                break; 
            case 2:
                if(occupied == true)
		{
		(*rptr).printreel();
		}
	else {
cout << "No slot machine configuration has been chosen. Please choose 1" << endl; }
                break;
       case 3: 
		if(occupied == true)
		{
		findsymbol(sptr, rptr);
		}
		else {
		cout << "No slot machine configuration has been chosen. Please choose 1" << endl; }
	break;
	case 4:
		if(occupied == true)
		{
		spinslot(sptr, rptr);
		}
		else {
		cout << "No slot machine configuration has been chosen. Please choose 1" << endl; }
	break;
	case 5: cout << "Goodbye! /n";
	exit(8);       // exits the menu and program
	break;
	default: cout << selection << " is not a valid menu item. Please choose a valid number.\n";  // does not allow for a number besides 1-4 to be chosen
        }
    } while (selection != 0 );
}


void readin(symbol* sptr)  // reads in the symbols file 
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
		int newvalue;
		fin >> temp >> newvalue;
		(*sptr).setname(temp);
 		(*sptr).setbonusvalue(newvalue);
		cout << (*sptr).getname() << " " << (*sptr).getbonusvalue() << endl;
		sptr++;
		}
	fin.close();
	
	delete[] temp;
	delete[] filename;
	
}

void reelfill (symbol* sptr, reel* rptr)
{		
	for(int j = 0; j < 3; j++)
	{
 	rptr[j].setreel(sptr);
	}
				// randomizes my reelfill
	
 
}
	
	
int spinslot (symbol* sptr, reel* rptr)   // function that spins the slot
{
	srand(time(NULL));
	int sum = 0;
	cout << "Payline is ";   // reads the payline of the symbols
	for(int i = 0; i < 3; i++)
		{
		sum += rptr[i].spin();	  // outputs 3 symbols and then sums the value
		}
	cout << endl << "Total value is " << sum << endl;
}


void findsymbol(symbol* sptr, reel* rptr)   // function to choose a specific symbol and bvalue
{					
	
	int column; //stop#
	int row; //reel#
	cout << " Choose reel and stop number: ? " << endl; 
	cin >> row >> column;
	symbol* rowptr = rptr[row].getrow();
		if(column > -1 && column < 10 && row > -1 && row < 3)  // sets limit to what numbers can be chosen
		{
		if((*sptr).getbool() == true)
		{
			cout << " The symbol is: " << rowptr[column].getname() << endl;
			cout << " The bonus value is: " << rowptr[column].getbonusvalue() << endl;
			cout << " Boolean: " << rowptr[column].getbool() << endl;	
		}
		else
			{
			cout << "There is no bonus value." << endl;			// checks for true or false
                        cout << "Boolean: " << rowptr[column].getbool() << endl;
			} 
		}
		else
		{
			cout << "You have chosen an incorrect number, please choose another option" << endl;
		}
		

}

