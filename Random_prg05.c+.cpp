/*
	Random_prg05.c++: srand() ile rastgele sayý üretme.
*/
#include <iostream>
#include <cstdlib>		/* srand() */
#include <ctime>		/* time    */

using namespace std;
int main ()
{
	int i, RastGeleSayi, EnKucuk, EnBuyuk, aralik;
	EnKucuk=1, EnBuyuk=10;
	srand((unsigned)time(0));
	aralik=(EnBuyuk-EnKucuk)+1;
	for (i=0; i<20; i++){ 
		RastGeleSayi = EnKucuk + int (aralik*rand()/(RAND_MAX+1.0)); 
		cout << "RastGeleSayi : " << RastGeleSayi << endl;
	}
	return 0;
}
