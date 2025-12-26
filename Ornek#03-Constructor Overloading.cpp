/*
	Constructor Overloading:
	Just like other member functions, constructors can also be overloaded.
	Infact, when you have both default and parameterized constructors
	defined in your class you are having Overloaded Constructors, 
	one with no parameter and other with parameter.
	You can have any number of Constructors in a class that differ in a parameter list. 	
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;
 
class Student{
 	private:
 		int rollno;
		string name;
 	public:
 		Student (int x){
  		rollno=x;
  		name="None";
 	}
 	Student (int x, string str){
  		rollno=x ;
  		name=str ;
 	}
};
int main ()
{
 	Student A (10);
 	Student B (11, "Ram");

  	return 0;
}
