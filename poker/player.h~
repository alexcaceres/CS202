#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>

using namespace std;


class player{
	public:
		player();
		~player();
		//void setname(string);
		void setbet( float );
		void sethand( card* );

		string getname() const;
		float getbet() const;
		card* gethand() const;

		friend ostream& operator<<(ostream&, player&);
		friend ifstream& operator>>(ifstream&, player&)
	private:
		string name;
		float bet;
		card* hand;
};
