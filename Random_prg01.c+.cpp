/*
	Random_prg01.c++: srand() ile rastgele sayý üretme.
*/
#include <iostream>
#include <cstdlib>		/* rand(), srand() */
using namespace std;

int main ()
{
	int i, RastGeleSayi;
	RastGeleSayi = rand(); 
	cout << "RastGeleSayi : " << RastGeleSayi << endl;
	return 0;
}
