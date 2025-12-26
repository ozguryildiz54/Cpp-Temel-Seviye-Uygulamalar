/*
   10prg07.c++: Bir karakter dizisini tersyüz etme programý.
 */
#include <iostream>
#include<iomanip>
#include <cmath>
#define n 40
using namespace std; 

int main(void)
{
    char dizi[n], gecici;
	int  i, boyut;
/* 
    Diziyi okutma .........
 */
    for (i=0; i<n; i++)
    dizi[i]='0';
	cout << "Bir seyler yaziniz : ";
    gets(dizi);
    cout << "\nDuz yazilimi     : ";
	puts(dizi);
/* 
    Sonlandýrýcý karaktere kadar  ......
*/
    for (i=0; n; i++)
    	if (dizi[i] =='0') 
		{
			boyut=i-1;
			break;
		}
	cout << "Tersten yazilimi :";
	for (i=boyut; i>=0; i--)
		cout << dizi[i];
 return 0;
}

