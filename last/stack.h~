#include <iostream>
#include <vector>

using namespace std;

class Stack {
        public:
                // destructor is not needed anymore

                Stack();
                Stack(const Stack&);
                Stack& operator=(const Stack&);
                bool push(int);
                bool pop(int&);
                bool empty() const;
                bool clear();
                friend ostream& operator<<(ostream&, const Stack&);
        private:
                vector<int> data;
};
