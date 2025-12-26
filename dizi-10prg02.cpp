/*
	10prg02.c++: 10 tane sayýnýn aritmetik ortalamasýný ve standart sapmasýný hesaplama. 
*/
#include <iostream>
#include <math.h>
#define N 10
using namespace std;

int main(void)
{
	int i;
    float x[N], toplam = 0., AritmatikOrt, std_sapma;
/*
    ortalama hesabý 
*/
	for (i=0; i<N; i++)
    {
		cout << i+1 << ". sayi : "; 
        cin >> x[i];
        toplam += x[i];
   }
   AritmatikOrt = toplam/N;
/*
      standart sapma hesabý
*/
   for (toplam = 0.0, i=0; i<N; i++)
       toplam += pow (x[i] - AritmatikOrt, 2.0);

   std_sapma = sqrt( toplam/(N-1) );

   cout << "Aritmetik Ortalama = " << AritmatikOrt << endl;
   cout << "Standart sapma     = " << std_sapma;

  return 0;
}


