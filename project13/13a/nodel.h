#ifndef __NODEL_H_
#define __NODEL_H_
#include <iostream>

using namespace std;

class ListN;

class Node{
	private:
		Node(int, Node*);
		int data;
		Node* next;
		friend class ListN;
              friend ostream& operator<<(ostream&, const ListN&);
};

class ListN{
        public:
              ListN(int = 0);
              ListN(const ListN&);
              ~ListN();
		bool gotoBeginning();
		bool gotoEnd();
		bool gotoNext();
              bool gotoPrior();
		bool insert(int);
              bool remove(int&);
              bool empty() const;
              bool full() const;
              bool clear();
              void setcursor(int);
              int getcursor() const;
		ListN& operator=(const ListN&);
              friend ostream& operator<<(ostream&, const ListN&);
        private:
		Node* head;
		Node* cursor;
};

#endif
