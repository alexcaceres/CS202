#include <iostream>

using namespace std;

class employee: public person
 {
        public:
        	
  
                employee();
                ~employee();
                char* gettitle() const;
		int* getempnumber() const;
		int getsalary() const;
		void settitle(char*);
		void setempnumber(int*);
		void setsalary(int);
		void printe();

        private:
        	char* title;
                int* empnumber;
                int salary;
                
          
};

