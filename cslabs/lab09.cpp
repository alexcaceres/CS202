#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <stdexcept>
using namespace std;

int main(int argc, char* argv[])
{
	
	ifstream fin;
	string al;
	fin.open(argv[1]);

	if(argc != 2)
	{
		throw runtime_error("Invalid number of arguments!");
	}
	if(fin.fail())
		{
		throw runtime_error("Could not open file!");
		}
	else
	{
	while(!fin.eof())
		{
	
		fin >> al;
		cout << al << " ";
		}
	cout << endl;
	fin.close();
}
return 0;
}


// fin.good
// bool to check if right number of arguments
// throw aborted core dumped

