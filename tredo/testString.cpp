#include "String.cpp"


/**************************** Header Files *****************************/
#include <iostream>

using namespace std;


/***************************** Main Program *****************************/
int main() 
{
	// declare variables
	int selection;
	int testspassed = 0;



	// Loop menu until quit
	do{
		// print out the menu
		cout << endl;
		cout << "1. Check Empty when String is Empty" << endl;
		cout << "2. Checks String Length" << endl;
		cout << "3. Check Assignment Operator" << endl;
		cout << "4. Check [] Operator" << endl;
		cout << "5. Clears the String" << endl;
		cout << "6. Check + Operator" << endl;
		cout << "7. Test Copy Constructor" << endl;
		cout << "8. Test Istream operator" << endl;
		cout << "9. Quit Program" << endl << endl;

		// prompt user for menu option
		cout << "Please select an option: ";
		cin >> selection;

		// process menu option
		switch(selection)
			{
				// Check Empty and when String is Empty
				case 1:
					{
					// set number of tests passed to zero
					testspassed = 0;
					String one;
					cout << "Checking if empty when string is empty" << endl << endl;
					if(!one.empty()) 
					{
						cout << "ERROR: in empty() (says not empty when it is empty)" << endl;
					}
					else
					{
						cout << "String is empty" << endl;
						testspassed ++;
					}

					one = "test";
					cout << endl;
					// print out test 
					// check if empty (should be empty)
					cout << "Checking if String is empty when it is full" << endl;
					// check if string is empty when it is full
					if(one.empty()) 
					{
						cout << "ERROR: in empty() (says not empty when it is empty)" << endl;
					}
					else
					{
						cout << "String is full" << endl;
						cout << "The String is: " << one << endl;
						testspassed ++;
					}
					
					cout << endl << "Passed " << testspassed << " out of 2 tests" << endl;
					
					}

				break;
			case 2:
					{
					// set number of tests passed to zero
					testspassed = 0;

					// print out test 
					cout << "Tests String Length" << endl;
					cout << "===================================" << endl << endl;
					

					String two;
					two = "length";
					
					cout << "The String is: " << two << endl;
					cout << endl;

							// check length
							cout << "Getting length..." << endl;
							if(two.getLength() != 6) 
							{
								cout << "Failed" << endl;
							}
							else
							{
								cout << "Success" << endl;
								testspassed ++;
							}
				
						cout << endl << "Length has been retrieved: " << endl;
						cout << endl << "The length is: " << two.getLength() << endl;
					
					// check empty
					if(two.empty()) 
					{
						cout << "ERROR: in empty (says empty when it is not empty)" << endl;
					}
					else
					{
						cout << "String is NOT EMPTY" << endl;
						testspassed ++;
					} 

					
					cout << endl << "String has been checked" << endl;

					
				
					cout << endl << "Passed " << testspassed << " out of 2 tests" << endl;
					}

				break;

				case 3:
					{
					// print out test 
					cout << "Checking assignment operator" << endl << endl;
					cout << "Checking string explicitly ' ' " << endl << endl;
					String original = "abcdefghijkl";
					String copy;
					copy = original;	
					// assignment operator
					

					// print strings
					cout << "Copied String: " << endl;
					cout << copy << endl << endl;

					cout << "Original String: " << endl;
					cout << original << endl;

					cout << endl << "The two strings should match" << endl << endl;
					
					
					

					// checking if assignment operator works with arrays
					cout << "Second test" << endl;
					cout << "Character Array String" << endl;
					cout << endl;
					
					char str[] = "mnopqrstuv";
					String b;
					b = str;	
					// assignment operator
					

					// print queues
					cout << "Copied String: " << endl;
					cout << b << endl << endl;

					cout << "Original String: " << endl;
					cout << str << endl;
					}
					cout << "The two strings should match" << endl;
				break;


				case 4:
					{
					testspassed = 0;

					// print out test 
					cout << "Check [] operator" << endl;
					
					String check = "hurray";
					cout << "First checks the String" << endl;
					cout << "The string is: " << check << endl;
					
					cout << " Checking [] operator..." << endl;
					
					for(int i = -1; i <= check.getLength(); i++)
					{
						if((i == check.getLength() && check[i] == '\0') || (i == -1 && check[i] == '\0')) {
							//pass
							cout << "Character at index " << i << " is null" << endl;
							testspassed++;
						}
						cout << check[i] << endl;
					}
					
					cout << endl << "Passed " << testspassed << " out of 2 tests" << endl;
					}
				break;


				case 5:
					{
					
					cout << "Checking clear()" << endl;
					// set number of tests passed to zero
					testspassed = 0;
					// string is full
					String a = "abcd";
					cout << "The String is:" << a << endl;
					
					cout << "-------------------------------------" << endl;
					cout << "Checking if the String has been cleared" << endl;
					// print out test 
					
					cout << "Clearing the String..." << endl;
					cout << endl; 
					

					// clear the string
					if(!a.clear()) 
					{
						cout << "ERROR while clearing string" << endl;
					}

					if(!a.empty()) 
					{
						cout << "ERROR, string is not empty after clear" << endl;
					}
					else
					{
						cout << "The String has been cleared" << endl;
						cout << endl;
						testspassed++;
					}

					cout << "Start print function:" << endl << endl;
					cout << a << endl;
					cout << endl << "End print function" << endl;	


					cout << endl << "Passed " << testspassed << " out of 1 tests" << endl;

					}
					
				break;


				case 6:
					{
					// set number of tests passed to zero
					testspassed = 0;

					// print out test 
					cout << "Check + operator" << endl;
					// print out certain positions in the string 
					
					String one = "one";
					String two = "two";
					cout << endl;
					cout << one << "+" << two;
					one + two;
					cout << ": " << one << endl;
					cout << "The length is: " << one.getLength() << endl;
					testspassed++;
					
					// Checking if they are both empty
					cout << "---------------" << endl;
					cout << "Check when both of the strings are empty" << endl;
					
					String three;
					String four;
					
					cout << three << "+" << four << endl;
					three + four;
					cout << ": " << three << endl;
					cout << "The length is: " << three.getLength() << endl;
					testspassed++;
				
					// Checking when one is empty
					cout << "----------------" << endl;
					cout << "Checking when one of the strings is empty" << endl;
					
					String five = "five";
					String six;
					cout << five << "+" << six;
					five + six;
					cout << ": " << five << endl;
					cout << "The length is: " << five.getLength() << endl;
					
					cout << "----------------" << endl;
					
					// Checking if the space is counted for the length
					
					cout << " Checking when a space is included" << endl;
					String seven = "seven";
					String space = " ";
					String eight = "eight";
					seven + space;
					seven + eight;
					cout << seven << endl;
					cout << "The length is: " << seven.getLength() << endl;
					testspassed++;
				
				

					cout << endl << "Passed " << testspassed << " out of 3 tests" << endl;
					}
				break;
				

				case 7:
				{
					// print out test 
					cout << "Checking Copy Constructor..." << endl;

					// assignment operator
					String old = "apple";
					String snew = old;

					// print strings
					cout << "Copied String: " << endl;
					cout << snew << endl << endl;

					cout << "Original String: " << endl;
					cout << old << endl << endl;

					cout << endl << "The two strings should match" << endl;
				}



				break;
				
				case 8:
				{
						// Checking istream operator
						cout << "Istream operator check" << endl;
						cout << "Please input a String name." << endl;
						
						String one;
						cin >> one;
						// String has been inputted
						
						cout << "The string has been inputted" << endl;
						cout << one << endl;
						
				}
			}
				cout  << endl << "****************************************" << endl;

	}
	while(selection != 9);

	return 0;
}




