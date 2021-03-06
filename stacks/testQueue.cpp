#include "Queue2.cpp"


/**************************** Header Files *****************************/
#include <iostream>

using namespace std;

/******************** Global Variables and Constants ********************/
const int QUEUE = 10;


/***************************** Main Program *****************************/
int main() 
{
	// declare variables
	int selection;
	int data;
	int testspassed = 0;

	// create queues
	cout << endl << endl << "Intialize queue size " << QUEUE << endl << endl;
	Queue intQueue(QUEUE), copy;


	// Loop menu until quit
	do{
		// print out the menu
		cout << endl;
		cout << "1. Check Empty and Full when Queue is Empty" << endl;
		cout << "2. Enqueue items into queue" << endl;
		cout << "3. Check Assignment Operator" << endl;
		cout << "4. Check Compare Operator" << endl;
		cout << "5. Clears the Queue and Checks Enqueue" << endl;
		cout << "6. Check Dequeue" << endl;
		cout << "7. Test Copy Constructor" << endl;
		cout << "8. Quit Program" << endl << endl;

		// prompt user for menu option
		cout << "Please select an option: ";
		cin >> selection;

		// process menu option
		switch(selection)
			{
				// Check Empty and Full when Queue is Empty
				case 1:
					// set number of tests passed to zero
					testspassed = 0;

					// print out test 
					cout << "Checking if empty and full when queue is empty" << endl;

					// check if empty (should be empty)
					if(!intQueue.empty()) 
					{
						cout << "ERROR: in empty() (says not empty when it is empty)" << endl;
					}
					else
					{
						cout << "Queue is empty" << endl;
						testspassed ++;
					}

					// check if full (should not be full)
					if(intQueue.full()) 
					{
						cout << "ERROR: in full() (says full when it is not full)" << endl;
					}
					else
					{
						cout << "Queue is NOT FULL" << endl;
						testspassed ++;
					}

					cout << endl << "Passed " << testspassed << " out of 2 tests" << endl;
					//check underflow - dequeue when empty


				break;
			case 2:
					// set number of tests passed to zero
					testspassed = 0;

					// print out test 
					cout << "Enqueue Multiple Data Items onto List" << endl;
					cout << "===================================" << endl << endl;
					cout << "Enqueuing Data: " << endl;

					// enqueue multiple data items on the queue		
					for(int i = 0; i < QUEUE; i++) 
						{			
							cout << "Enqueue " << i << " - ";

							// check enqueue
							if(!intQueue.enqueue(i)) 
							{
								cout << "Failed" << endl;
							}
							else
							{
								cout << "Success" << endl;
								testspassed ++;
							}
						}
						cout << endl << "Enqueueing on Full: " << endl;

					// check overflow
					cout << "Enqueue (overflow)" << endl;
					if(!intQueue.enqueue(10)) {
						cout << "Queue full. Passed.\n" << endl;
						testspassed++;
					} else {
						cout << "Error: (Not passed) " << endl;
						
					}
						

					cout << endl << "Checking Empty and Full: " << endl;

					// check if queue is full
					if(!intQueue.full()) 
					{
						cout << "ERROR: in full (says not full when it is full)" << endl;
					}
					else
					{
						cout << "QUEUE is FULL" << endl;
						testspassed ++;
					} 

					// check empty
					if(intQueue.empty()) 
					{
						cout << "ERROR: in empty (says empty when it is not empty)" << endl;
					}
					else
					{
						cout << "Queue is NOT EMPTY" << endl;
						testspassed ++;
					} 

					
					cout << endl << "Enqueueing on Full: " << endl;

					
					// check print
					cout << "Start print function:" << endl << endl;
					cout << intQueue << endl;
					cout << endl << "End print function" << endl;

					cout << endl << "Passed " << testspassed << " out of 13 tests" << endl;


				break;

				case 3:

					// print out test 
					cout << "Checking assignment operator" << endl;
					

					// assignment operator
					copy = intQueue;

					// print queues
					cout << "Copied Queue: " << endl;
					cout << copy << endl << endl;

					cout << "Original Queue: " << endl;
					cout << intQueue << endl << endl;

					cout << endl << "The two queues should match" << endl;


				break;


				case 4:
					testspassed = 0;

					// print out test 
					cout << "Check comparison operator" << endl;

					// check if the same
					if(!(intQueue == copy)) 
					{
						cout << "Error in == operator (says not equal when they are)" << endl;
					}
					else
					{
						cout << "Queues are equal" << endl;
						testspassed ++;
					}

					cout << endl << "Removing one data item from copy queue" << endl;
					copy.dequeue(data);
					if(intQueue == copy) 
					{
						cout << "Error in == operator (says equal when they are not)" << endl;
					}
					else
					{
						cout << "Queues are not equal" << endl;
						testspassed ++;
					}

					cout << endl << "Passed " << testspassed << " out of 2 tests" << endl;

				break;


				case 5:
					
						// set number of tests passed to zero
					testspassed = 0;

					// print out test 
					cout << "Clear the Queue" << endl;
					

					// clear the queue
					if(!intQueue.clear()) 
					{
						cout << "ERROR while clearing queue" << endl;
					}

					if(!intQueue.empty()) 
					{
						cout << "ERROR, queue is not empty after clear" << endl;
					}
					else
					{

						testspassed++;
					}

					cout << "Start print function:" << endl << endl;
					cout << intQueue << endl;
					cout << endl << "End print function" << endl;	


					cout << endl << "Passed " << testspassed << " out of 1 tests" << endl;


					testspassed = 0;
					
					// print out test 
					cout << "Enqueue Values Until Queue is Full" << endl;
					cout << "Enqueuing: " << endl;

					// enqueue multiple data items on the queue		
					for(int i = 0; i < QUEUE; i++) 
						{			
							cout << "Enqueue " << i << " - ";

							if(intQueue.enqueue(i)) 
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
	
					if(!intQueue.full()) 
					{
						cout << "ERROR: in FUll (says not full when it is full)" << endl;
					}
					else
					{
						cout << "Queue is FULL" << endl << endl;
						testspassed ++;
					} 

					

					// check print
					cout << "Start print function:" << endl << endl;
					cout << intQueue << endl;
					cout << endl << "End print function" << endl;

					cout << endl << "Passed " << testspassed << " out of 11 tests" << endl;
					
				break;


				case 6:
					// set number of tests passed to zero
					testspassed = 0;

					// print out test 
					cout << "Dequeue More Data Items onto Queue" << endl;
					cout << "Dequeuing Data: " << endl;

					// push multiple data items on the Queue		
					for(int i = 0; i < QUEUE/2; i++) 
						{			
							cout << "Dequeue " << i << " - ";

							// check dequeue
							if(!intQueue.dequeue(i)) 
							{
								cout << "Failed" << endl;
							}
							else
							{
								cout << "Success" << endl;
								testspassed ++;
							}
						}

					//cout << endl << "Checking Empty: " << endl;

					// check if Queue is full
					
					if(intQueue.full()) 
					{
						cout << "ERROR: in full (says full when it is not full)" << endl;
					}
					else
					{
						cout << "Queue is NOT FULL" << endl;
						testspassed ++;
					} 
					
					// check empty
					if(intQueue.empty()) 
					{
						cout << "ERROR: in empty (says empty when it is not empty)" << endl;
					}
					else
					{
						cout << "Queue is NOT EMPTY" << endl;
						testspassed ++;
					}

					cout << endl << "Passed " << testspassed << " out of 7 tests" << endl;

				break;
				

				case 7:
				{
					// print out test 
					cout << "Checking Copy Constructor" << endl;

					// assignment operator
					Queue copy2 = copy;

					// print stacks
					cout << "Copied Queue: " << endl;
					cout << copy2 << endl << endl;

					cout << "Original Queue: " << endl;
					cout << copy << endl << endl;

					cout << endl << "The two queues should match" << endl;
				}



				break;
			}
				cout  << endl << "****************************************" << endl;

	}
	while(selection != 8);

	return 0;
}




