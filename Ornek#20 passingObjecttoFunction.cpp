/*
	an example of object assignment... 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

class samp{
	private:
		int i;
	public:
		samp(int n){
			i = n;
		}
		int get_i( ){
			return i;
		}
};
//  Set object.i to its square.
//  This affect the calling argument
		void sqr_it (samp *object){
			object -> set (object -> get_i() *object -> get_i());
		}

int main( )
{
	samp a(10);
	sqr_it(&a); 		// pass a's address to sqr_it
	cout << " a : " << sqr_it(a) << "\n";
	
	return 0;
}
