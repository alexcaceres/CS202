#include "card.h"


using namespace std;
 

card::card()				// constructor
{
        suit = "suit";
	rank = "rank";
	location = "location";

}

card::card( const card& t ){      // copy  constructor 
	suit = t.suit;
	rank = t.rank;
	location = t.location;
}

card::~card()   // destructor
{	


}


void card::setlocation( string nlocation){
	location = nlocation;
}


string card::getsuit()
{
	return suit;
}

string card::getrank()
{
	return rank;
}

string card::getlocation()
{
	return location;
}

ostream& operator<<(ostream& out, card& print)
{

 out << "suit " << print.suit << "rank " << print.rank << "location" << print.location;

 return out;
}

ifstream& operator>>(ifstream& in, card& print)
{

in >> print.suit >> print.rank >> print.location;
/*if(rank == "one"){
	print.value = 1;
}
	else if(rank == "two"){
	print.value = 2;
}
	else if(rank == "three"){
	print.value = 3;
}
	else if(rank == "four"){
	print.value = 4;
}
	else if(rank == "five")
{
	print.value = 5;
}
	else if(rank == "six")
{
	print.value = 6;
}
	else if(rank == "seven")
{
	print.value = 7;
}
	else if(rank == "eight")
{
	print.value = 8;
} 
	else if(rank == "nine")
{
	print.value = 9;
}
	else{
	print.value = 10;
}*/
return in;

}



