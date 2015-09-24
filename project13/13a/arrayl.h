#ifndef __ARRAYL_H_
#define __ARRAYL_H_
#include <iostream>

using namespace std;

class ListA{
        public:
              ListA(int = 10);
              ListA(const ListA&);
              ~ListA();
		bool gotoBeginning();
		bool gotoEnd();
		bool gotoNext();
              bool gotoPrior();
		bool insert(int);
              bool remove(int&);
              bool empty() const;
              bool full() const;
              bool clear();
            int getData(int) const;     
		ListA& operator=(const ListA&);
              friend ostream& operator<<(ostream&, const ListA&);
          private:
              int size;
		int actual;
              int cursor;
              int *data;
};

#endif
