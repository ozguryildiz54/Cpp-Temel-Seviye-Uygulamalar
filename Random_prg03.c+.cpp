/*
	Random_prg03.c++: srand() ile rastgele sayý üretme.
*/
#include <iostream>
#include <cstdlib>		/* srand() */
#include <ctime>		/* time    */

using namespace std;
int main ()
{
	int RastGeleSayi;
	srand((unsigned)time(0)); 
	RastGeleSayi = rand(); 
	cout << "RastGeleSayi : " << RastGeleSayi << endl; 
	return 0;
}
