#include "player.h"



player::player(){
	name = "name";
	bet = 0.0;
	hand = new card[5];
}

player::~player(){

	/*delete[]hand;
	hand = NULL;*/
}

/*void player::setname( string nname ){
	name = nname; 
}*/

void player::setbet( float nbet ){
	bet = nbet;
}

void player::sethand( card* nhand ){
	
}

string player::getname() const
{
	return name;
}

float player::getbet()  const
{
	return bet;
}

card* player::gethand() const
{
	return hand;
}

// friend functions

ifstream operator>>(ifstream& in, player& player)
{
	string first, last;
	in >> first >> last;
	cout << first << endl;
	first += ' ';
	cout << first << endl;
	first += last;
	cout << first << endl;

return in;
}

ostream operator<<(ostream& out, player& player)
{
	out << "Name: " << player.name << "Hand: ";
		for(int i = 0; i < 5; i++)
			{
				out << " " << player.hand[i] << endl;
			}
		out << "Bet" << player.bet;
	return out;
}