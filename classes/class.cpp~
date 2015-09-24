#include <iostream>
#include "class.h"
#include "string_library.h"
#include <cstdlib>
#include <ctime>

using namespace std;

symbol:: symbol()
{
	char* name = NULL;
	int bonusvalue = 0;				// constructor
	bool exists = false;
}

symbol:: symbol(const symbol& s)       // copy constructor
{

	bonusvalue = s.bonusvalue;
	exists = s.exists;
	name = new char[strlength(s.name)+1];
	stringcopy(name, s.name);
}	

symbol:: ~symbol()
{
	if( name != NULL)
		{				// destructor
			delete[] name;
		}
			name = NULL;
			bonusvalue = 0;
			exists = false;
}



char* symbol::getname() 
{
	return name;
}

int symbol:: getbonusvalue() 
{
	return bonusvalue;
}

bool symbol:: getbool() 
{
	return exists; 
}

void symbol::setname(char* reels)
{
	name = reels;
	strlength(reels);
	name = new char[strlength(reels) +1];   // string length + NULL
	stringcopy (name, reels);
}

void symbol:: setbonusvalue(int newvalue)
{
	bonusvalue = newvalue;
	setbool(bonusvalue);
}

void symbol:: setbool (int check)
{
	if(check != 0)                     // checks if the value is true or false
		{
			exists = true;
		}
	else
		{
			exists = false;
		}
}

void symbol:: print ()
{
		cout << " " << getname() << " " << getbonusvalue();
}

// reel class 

reel:: reel()				// default constructor
{
	symbol* stop = NULL;
	int line = 0;
}

reel:: reel( const reel& r)   // copy constructor
{
	line = r.line;
	stop = new symbol[10];
	for(int i =0; i <10; i++)
	{
	stop[i].setbonusvalue(r.stop[i].getbonusvalue());
	stop[i].setbool(r.stop[i].getbool());
	stop[i].setname(r.stop[i].getname());
	}

}

reel:: ~reel() // destructor
{

	if(stop != NULL)
	{
		delete[] stop;
	}
		line = 0;
}

symbol* reel::getrow()
{
	return stop;
}

void reel:: setreel(symbol* sptr)

{
	stop = new symbol[10];
	for(int i =0; i < 10; i++)
		{
		int number = rand() %6;	
		stop[i].setname(sptr[number].getname());
		stop[i].setbonusvalue(sptr[number].getbonusvalue());
		
			}
	

}

int reel:: spin()    // spins the reel
{
	
	// randomly pick 10 symbols
	int number = rand()%10;
	cout << stop[number].getname() << " ";


return stop[number].getbonusvalue();
	
	 
}



void reel:: printreel() // prints data in the reel
{
for(int i =0; i < 10; i++)
		{
		stop[i].print();  // only prints out one reel of 10 symbols
	 		/*if(i == 2 || i == 5 || i == 8 )     // With this uncommented I get 3 rows with 3 symbols in each row
               		{
               		  cout << "\n";
               		}*/
		}
 cout << endl;
}


