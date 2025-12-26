/*
	14prg06.c++: rand example: guess the number ..
*/
#include <iostream>
#include <cstdlib>		/* srand, rand */
#include <time.h>       /* time */

using namespace std;
int main ()
{
  	int GizliSayi, TahminSayi;
  	int sayac=0;

// 		initialize random seed ...
  	srand (time(NULL));

//		generate secret number between 1 and 10 ..
  	GizliSayi = rand() % 100 + 1;
	do{
    	cout << "\n 1 ile 100 arasi bir sayi seciniz : ";
    	cin >> TahminSayi;
    	sayac++;
    	if (GizliSayi<TahminSayi) cout << "Gizli sayi daha kucuktur";
    	else if (GizliSayi>TahminSayi) cout << "Gizli sayi daha buyuktur.";
  	} while (GizliSayi!=TahminSayi);
	cout << "Tebrikler! gizli sayiyi " << sayac << ". tahmininizde buldunuz.";
  	return 0;
}
