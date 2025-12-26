/*
	14prg01.c++: Rastgele Dizi
*/
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void rastgele (double *dizi, int n);
/* dizinin ilk n elemanýna [0,1] arasýnda rastgele sayý uretir */

int main()
{
  	int i;
  	double x[5];
/* rastgele sayý üretecini deðiþtir */
  	srand (1234567);
  	rastgele (x, 5);
  	puts ("Rastgele dizi elemanlarý:");
  	for (i=0; i<4; i++)
    	cout << setprecision(8) << x[i] << endl;
    return 0;
}

void rastgele (double *dizi, int n){
  	int i;
  	for (i=0; i<n; i++)
    	*(dizi + i) = (double) rand()/RAND_MAX;
}
