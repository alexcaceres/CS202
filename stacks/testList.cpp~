#include "listA.cpp"
/**************************** Header Files *****************************/

#include <iostream>

using namespace std;

/******************** Global Variables and Constants ********************/
const int listsize = 6;


/***************************** Main Program *****************************/
int main() 
{
	// declare variables
	int selection;
	char data;
	int testspassed = 0;

	// create stacks
	cout << endl << endl << "Intialize list size " << listsize << endl << endl;
	List Alist(listsize), copy;


	// Loop menu until quit
	do{
		// print out the menu
		cout << endl;
		cout << "1. Check Empty and Full when List is Empty" << endl;
		cout << "2. Inserts items onto list" << endl;
		cout << "3. Check Assignment Operator" << endl;
		cout << "4. Cleared and Inserts more Values in list" << endl;
		cout << "5. Removes more values onto List" << endl;
		cout << "6. Test Copy Constructor" << endl;
		cout << "7. Check Beginning and End" << endl;
		cout << "8. Check go to Prior" << endl;
		cout << "9. Quit Program" << endl << endl;

		// prompt user for menu option
		cout << "Please select an option: ";
		cin >> selection;

		cout << endl << endl << "****************************************" << endl << endl;

		// process menu option
		switch(selection)
			{
				// Check Empty and Full when List is Empty
				case 1:
					// set number of tests passed to zero
					testspassed = 0;

					// print out test 
					cout << "Checking Empty and Full when List is Empty" << endl;
					cout << "===========================================" << endl << endl;

					// check if empty (should be empty)
					if(!Alist.empty()) 
					{
						cout << "ERROR: in empty() (says not empty when it is empty)" << endl;
					}
					else
					{
						cout << "List is EMPTY" << endl;
						testspassed ++;
					}

					// check if full (should not be full)
					if(Alist.full()) 
					{
						cout << "ERROR: in full() (says full when it is not full)" << endl;
					}
					else
					{
						cout << "List is NOT FULL" << endl;
						testspassed ++;
					}

					cout << endl << "Passed " << testspassed << " out of 2 tests" << endl;


				break;

				case 2:
					// set number of tests passed to zero
					testspassed = 0;

					// print out test 
					cout << "Inserts Data Items onto List" << endl;
					cout << "===================================" << endl << endl;
					cout << "Inserting Data: " << endl;

					// inserts multiple data items on the stack		
					for(int i = 0; i < listsize; i++) 
						{			
							cout << "inserts " << i << " - ";

							// check inserts
							if(!Alist.insert(i+'0')) 
							{
								cout << "Failed" << endl;
							}
							else
							{
								cout << "Success" << endl;
								testspassed ++;
							}
						}

					cout << endl << "Checking Empty and Full: " << endl;
					
					// check overflow
					cout << "Insert (overflow)" << endl;
					if(!Alist.insert(6+ '0')) {
						cout << "List full. Passed.\n" << endl;
						testspassed++;
					} else {
						cout << "Error: (Not passed) " << endl;
						
					}
					// check if list is full
					if(!Alist.full()) 
					{
						cout << "ERROR: in full (says not full when it is full)" << endl;
					}
					else
					{
						cout << "List is FULL" << endl;
						testspassed ++;
					} 

					// check empty
					if(Alist.empty()) 
					{
						cout << "ERROR: in empty (says empty when it is not empty)" << endl;
					}
					else
					{
						cout << "List is NOT EMPTY" << endl;
						testspassed ++;
					} 

			
					// check print
					cout << "Start print function:" << endl << endl;
					cout << Alist << endl;
					cout << endl << "End print function" << endl;

					cout << endl << "Passed " << testspassed << " out of 9 tests" << endl;


				break;

				case 3:
	
					// print out test 
					cout << "Checking Assignment Operator" << endl;
					cout << "============================" << endl << endl;

					// assignment operator
					copy = Alist;

					// print stacks
					cout << "Copied List: " << endl;
					cout << copy << endl;

					cout << "Original List: " << endl;
					cout << Alist << endl;;

					cout << endl << "The two lists should match" << endl;


				break;

				case 4:
						// set number of tests passed to zero
					testspassed = 0;

					// print out test 
					cout << "Clear the List" << endl;
					

					// clear the stack
					if(!Alist.clear()) 
					{
						cout << "ERROR while clearing list" << endl;
					}

					if(!Alist.empty()) 
					{
						cout << "ERROR, list is not empty after clear" << endl;
					}
					else
					{

						testspassed++;
					}

					cout << "Start print function:" << endl << endl;
					cout << Alist << endl;
					cout << endl << "End print function" << endl;	


					cout << endl << "Passed " << testspassed << " out of 1 tests" << endl;


					testspassed = 0;
					
					// print out test 
					cout << "Inserting Values Until Queue is Full" << endl;
					cout << "Inserting: " << endl;

					// insert multiple data items on the queue		
					for(int i = 0; i < listsize; i++) 
						{			
							cout << "Insert " << i << " - ";

							if(Alist.insert(i+'0')) 
							{
								cout<< "Success" << endl << endl;
								testspassed ++;
							} 
							else 
							{
								cout << "Failed" << endl;
							}
						}

					cout << endl << "Checking full: " << endl;
	
					if(!Alist.full()) 
					{
						cout << "ERROR: in FUll (says not full when it is full)" << endl;
					}
					else
					{
						cout << "List is FULL" << endl << endl;
						testspassed ++;
					} 

					

					// check print
					cout << "Start print function:" << endl << endl;
					cout << Alist << endl;
					cout << endl << "End print function" << endl;

					cout << endl << "Passed " << testspassed << " out of 7 tests" << endl;
				break;
			
				case 5:
					// set number of tests passed to zero
					testspassed = 0;
					// printing out list
					Alist.gotoBeginning();
					cout << "Before" << endl;
					cout << Alist << endl;


					// print out test 
					cout << "Remove More Data Items onto List" << endl;
					cout << "===============================" << endl << endl;
					cout << "Removing Data: " << endl;

					// remove multiple data items on the queue		
					for(int i = 0; i < listsize/2; i++) 
						{			
							cout << "Remove " << i << " - ";

							// check remove
							if(!Alist.remove(data)) 
							{
								cout << "Failed" << endl;
							}
							else
							{
								cout << "Success" << endl;
								testspassed ++;
							}
						}

					//cout << endl << "Checking Full: " << endl;

					// check if list is full
					
					if(Alist.full()) 
					{
						cout << "ERROR: in full (says full when it is not full)" << endl;
					}
					else
					{
						cout << "List is NOT FULL" << endl;
						testspassed ++;
					} 
					
					// check empty
					if(Alist.empty()) 
					{
						cout << "ERROR: in empty (says empty when it is not empty)" << endl;
					}
					else
					{
						cout << "List is NOT EMPTY" << endl;
						testspassed ++;
					}
					cout << " After " << endl;
					cout << Alist << endl;
					cout << endl << "Passed " << testspassed << " out of 5 tests" << endl;
					
					
				break;

				case 6:
				{
					// print out test 
					cout << "Checking Copy Constructor" << endl;
					cout << "=========================" << endl << endl;

					// assignment operator
					List copy2 = copy;

					// print stacks
					cout << "Copied List: " << endl;
					cout << copy2 << endl << endl;

					cout << "Original List: " << endl;
					cout << copy << endl << endl;

					cout << endl << "The two lists should match" << endl;
				}

				break;
				case 7:
					
					// clear
					cout << "The list has been cleared" << endl;
					Alist.clear();
					// insert values
					cout << "Inserting values into cleared list" << endl;
					for(int i = 0; i < listsize; i++) 
						{			
							cout << "Insert " << i << "-";
							if(Alist.insert(i+'0')) 
							{
								cout<< "Success" << endl << endl;
								testspassed ++;
							} 
							else 
							{
								cout << "Failed" << endl;
							}
						}
						
					cout << Alist << endl;
						
					
					// Check beginning function
					cout << "Check go to Beginning function" << endl;
					cout << "The cursor will go to the beginning" << endl;
					Alist.gotoBeginning();
					cout << "The cursor is at the beginning value" << endl;
					cout << Alist << endl;
					// Check if function goes to the end
					cout << endl;
					cout << "Check go to End function" << endl;
					cout << "The cursor will go to the end" << endl;
					Alist.gotoEnd();
					Alist.gotoPrior();
					cout << "The cursor is now at the end value" << endl;
					cout << Alist << endl;
					
					break;
					
				case 8:
				
					// check go to prior function
					cout << "Go to Prior check" << endl;
					
					cout << "Current list" << endl;
					cout << Alist << endl;
					Alist.gotoPrior();
					cout << "List after it has gone to previous element" << endl;
					cout << Alist << endl;
					cout << endl;
					// go to next function
					cout << endl;
					cout << "Current List" << endl;
					cout << Alist << endl;
					cout << "Go to Next" << endl;
					Alist.gotoNext();
					cout << "List after it has gone to the next element" << endl;
					cout << Alist << endl;
					
				break;
			}
				cout  << endl << "****************************************" << endl;

	}
	
	while(selection != 9);
	return 0;
}




