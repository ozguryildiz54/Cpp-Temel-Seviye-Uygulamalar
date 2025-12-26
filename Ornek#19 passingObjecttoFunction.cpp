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
//  Return square of o.i
	int sqr_it(samp object){
		return object.get_i( )* object.get_i( );
	}

int main( )
{
	samp a(10), b(2);
	cout << " a : " << sqr_it(a) << "\n";
	cout << " b : " << setw(3) << sqr_it(b) << "\n";
	
	return 0;
}
