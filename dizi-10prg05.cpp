/* 
    10prg05.c++ : Kabarcýk Sýralama (Bubble Sort) Algoritmasý
    ile bir dizinin elemanlarýný büyükten küçüðe doðru sýralama
 */
#include <iostream>
#include <iomanip>
#define n 10
using  namespace std;
 
int main (void)
{
    int a [n] = {100, -250, 400, 125 ,550, 900, 689, 450, 347, 700};
    int j, k, gecici;
/* 
    Dizinin kendisi .......
*/
    cout << "siralamadan once : ";
    for (k=0; k<n; k++)
        cout << setw (5) << a [k];
/*
    Sýralama islemi .......
*/
   for (k=0; k<n-1; k++)
        for (j=0; j < n-1; j++)
            if ( a[j] < a[j+1] )
			{
                gecici = a[j];
                a[j] = a[j+1];
                a[j+1] = gecici;
            }
/* 
    Sýralama bitti ......
*/
    cout << "\nsiralamadan sonra: ";
    for (k=0; k<n; k++)
        cout << setw (5) << a [k];
    cout << "\n";

  return 0;
}

