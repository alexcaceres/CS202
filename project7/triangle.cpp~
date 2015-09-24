#include "triangle.h"
#include <iostream>

using namespace std;


triangle::triangle(int a, int b)

{

	base = a;			//constructor
	height = b;
	area = .5*(b*a);
}


triangle::triangle(const triangle& t)		// copy constructor
{

	base = t.base;
	height = t.height;
	area = t.area;
}


triangle::~triangle()
{

					// destructor
}



triangle& triangle::operator=(const triangle& type)
{
	base = type.base;
	height = type.height;
	area = type.area;
	return *this;

}

bool triangle::operator==(const triangle& match) const
{

		bool same;
		if(base == match.base && height == match.height)
		{
			same = true;
		}
		else
		{	
			same = false;
		}
	return same;			
}


triangle operator+(const triangle& one, const triangle& two)
{
	triangle sum;
	sum.base = one.base + two.base;
	sum.height = one.height + two.height;
	sum.area = one.area + two.area;

return sum;

}


ostream& operator<<(ostream& out, triangle& three)
{

 out << "Base: " << three.base << " "  << "Height: " << " " << three.height << " " << "Area: " << three.area;
 return out;
}


ifstream& operator>>(ifstream& in, triangle& four)
{

 in >> four.base >> four.height;
 four.area = .5*four.base*four.height;
 return in;
}




