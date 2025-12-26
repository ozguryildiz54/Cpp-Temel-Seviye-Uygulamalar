/*
	example of the divisible function ...
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

class samp{
	private:
		int i, j;
	public:
		samp(int a, int b);
/*  divisible is defined here and 
	automatically in-lined         */
		int	divisible(){
			return !(i%j);
		}
};

samp :: samp (int a, int b){
	i=a;
	j=b;
}

int main ()
{
	samp object1 (10, 2);
	samp object2 (10, 3);
// this is true
	if (object1.divisible()) cout << "10 divisibly by 2\n";
// this is false
	if (object2.divisible()) cout << "10 divisible by 3\n";
			
	return 0;
}
