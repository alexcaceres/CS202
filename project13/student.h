#include <iostream>

using namespace std;

class student: public person {
        public:
        	
  
                student();
                ~student();
                char* getmajor() const;
		int* getnshenumber() const;
		double getgpa() const;
		void setmajor(char*);
		void setnshenumber(int*);
		void setgpa(double);
		void prints();

        private:
        	char* major;
                int* nshenumber;
                double gpa;
                
          
};

