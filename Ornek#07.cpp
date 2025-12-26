/*
	OVERLOADING CONSTRUCTORS : Like any other function, a constructor
	can also be overloaded with different versions taking different parameters:
	with a different number of parameters and/or parameters of different types.
	The compiler will automatically call the one whose parameters match the arguments:
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;
 
class Dikdortgen{					// class declaration ....
	private:
		int en, boy;
  	public:
    	int alan;
		Dikdortgen ();		   		// constructor...
    	Dikdortgen (int, int);
    	int Alan (void)
		{
			alan = en * boy;
			return alan;
		}
};

Dikdortgen :: Dikdortgen () {		// constructor position ...
  en = 5;
  boy = 5;
}

Dikdortgen :: Dikdortgen (int e, int b){
  en = e;
  boy = b;
}

int main () {
  Dikdortgen object1 (3,4);			// automatic call to constructor ...
  Dikdortgen object2;				// automatic call to constructor ...
  cout << "\n  1. Alan : " << object1.Alan () << " cm2 dir." << endl;
  cout << "\n  2. Alan : " << object2.Alan () << " cm2 dir." << endl;
  return 0;
}
