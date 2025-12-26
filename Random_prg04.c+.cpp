/*
	Random_prg04.c++: srand() ile rastgele sayý üretme.
*/
#include <iostream>
#include <cstdlib>		/* srand() */
#include <ctime>		/* time    */

using namespace std;
int main ()
{
	int i, RastGeleSayi;
	srand((unsigned)time(0));
	for (i=0; i<20; i++){ 
		RastGeleSayi = rand()%10+1; 
		cout << "RastGeleSayi : " << RastGeleSayi << endl;
	}
	return 0;
}
