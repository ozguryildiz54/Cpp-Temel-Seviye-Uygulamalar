/*
	Constructors functions ......
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

class Line {
	private:
		double length;
    public:
    	void setLength (double len);
     	double getLength (void);
      	Line ();                  // This is the constructor
};
 
Line :: Line (void)    // Member functions definitions
					   // including constructor
{
    cout << "Object is being created" << endl;
}

void Line :: setLength (double len)
{
    length = len;
}

double Line :: getLength (void)
{
    return length;
}

int main( )                // Main function for the program
{
   Line line;
 
   line.setLength (6.0);             // set line length
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}
