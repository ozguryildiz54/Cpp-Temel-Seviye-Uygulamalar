/*
	Parameterized Constructor :
	These are the constructors with parameter. Using this Constructor
	you can provide different values to data members of different objects,
	by passing the appropriate values as argument.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

class Cube{
 	
 	public:
 		int side;
	 	Cube(int x){  
   			side=pow (x, 2);
  		}
};

int main ()
{
	Cube object1 (10);
 	Cube object2 (20);
 	Cube object3 (30);
 	cout << setw(6) << object1.side;
 	cout << setw(6) << object2.side;
 	cout << setw(6) << object3.side;
  
  return 0;
}
