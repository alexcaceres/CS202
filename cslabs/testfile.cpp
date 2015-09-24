#include <iostream>
#include "string_library.h"
using namespace std;


 
int main()
{

 	char first[] = "orange";
 	char second[] = "apple";
	char* string1 = first;
	char* string2 = second;

	
		                                                                                                                                                                                                     
	bool equal;
	int strlength1;
	int strlength2;
	
	char* fruit1;
	char* fruit2;
	
	/*fruit1 = stringcopy(first, second);
	
	cout << "Copy string 1 into new array: " << fruit1 << endl;
	fruit2 = stringcopy(first, second);



 	cout << "Copy string 2 into new array: " << fruit2 << endl;
	*/strlength1 = strlength(string1);

	cout << "String length of string 1: " << strlength1 << endl;
	strlength2 = strlength(string2);
	cout << "String length of string 2: " << strlength2 << endl;
		
	strcat(string1, string2);
	cout << "String concat: " << string1 << endl;

	equal = strcompare(string1, string2, 10);

		if(equal == true)
 		{
  		cout << "String compare does match" << endl;
 		}
		else if( equal == false)
 		{
   		cout << "String compare does not match" << endl;
 		}
		return 0;
}
 


     
