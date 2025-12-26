/*
	example of the divisible function: Perhaps the most 
	common use of in-line functions defined within a class
	is to define constructor and destructor functions. 
	In the previous example, the samp class can more
	efficiently  be defined like below... 
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
// 	in-line constructor ....
		samp(int a, int b){i=a; j=b;};
		int	divisible(){
			return !(i%j);
		}
};
/*
samp :: samp (int a, int b){
	i=a;
	j=b;
}								*/

int main ()
{
	samp object1 (10, 2);
	samp object2 (10, 3);
// this is true
	if (object1.divisible()) cout << "10 divisibly by 2.\n";
// this is false
	if (object2.divisible()) cout << "10 divisible by 3.\n";
			
	return 0;
}
