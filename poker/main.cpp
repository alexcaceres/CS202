#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "classes.h"

using namespace std;

void menu();
int main()

{

}

void menu()
{


card* deck = new card[52];
card* stock = new card[52];
card* discardback = new card[52];
card* discard = discardback;


// make index

cout << "Shuffling the deck... " << endl;

cout << " Dealing the cards ..." << endl;


int selection;
do {
        cout << "  1. Print the deck  " << endl;
        cout << "  2. Print player information"<< endl;
        cout << "  3. Print the shuffled deck " << endl;
	cout << "  4. Print discard pile " << endl;
	cout << "  5. Print stock. " << endl;
	cout << "  6. Enter specific player's information " << endl;
	cout << "  7. QUIT" << endl;
        cin >> selection;

        switch (selection)
        {
            case 1:       // menu options 
	
                break; 
            case 2:
               

                break;
       case 3: 
		
	break;
	case 4:
		
	break;
	case 5;
	
	break;
	case 6;

	break;

	case 7: cout << "Goodbye! /n";
	exit(8);       // exits the menu and program
	break;
	default: cout << selection << " is not a valid menu item. Please choose a valid number.\n";  // does not allow for a number besides 1-7 to be chosen
        }
    } while (selection != 0 );
}


