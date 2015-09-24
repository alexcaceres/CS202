#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

class card{
	public:
		card();
		card(const card&);
		~card();
		void setlocation(string);

		//void cardcopy( card* );

		string getsuit();
		string getrank();
		string getlocation();
		card& operator =(const card&);
		bool operator> (card&);
		friend ifstream& operator >> (ifstream&, card&);
		friend ostream& operator << (ostream&, card&);
		friend bool operator <(card&, card&);
		//void printcard();
	private:
		string suit;
		string rank;
		int value;
		string location;
		

		
};







