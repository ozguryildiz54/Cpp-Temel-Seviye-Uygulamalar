/*
	Default Constructor : 
	Default constructor is the constructor which doesn't 
	take any argument. It has no parameter.
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
		Cube(){  
  			side=10;
 		}
};

int main()
{
	Cube object;
	cout << "Side degeri : " << object.side << endl;
  
	return 0;
}
