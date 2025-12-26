/* 
	10prg03.c++: Bir dizinin en büyük elemanýný bulan ve ekrana 
	yazan program.
 */
#include <iostream>
using namespace std;

int main(void)
{
	int a [10] = {100, -250, 400, 125, 550, 900, 689, 450, 347, 700};
    int k, eb;
/*
    ilk eleman en büyük kabul ediliyor 
*/
    eb = a[0]; 
    for (k=1; k<10; k++)
        if (a[k]>eb) eb = a[k];

   cout << "Dizinin en buyuk elemani =  " << eb <<  endl;
 return 0;
}

