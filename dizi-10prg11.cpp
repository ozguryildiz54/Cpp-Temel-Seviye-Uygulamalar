/* 
	10prg11.c++: Bir dizinin en büyük elemanýný fonksiyon yardýmýyla bulma programý
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int enBuyuk (int a[], int n);

int main()
{
    int a [10] = {100, -250, 400, 125, 550, 900, 689, 450, 347, 700};
    int eb;
    eb = enBuyuk (a, 10); 
    cout << "En buyuk eleman = " << eb;
   
    return 0;
}

int enBuyuk (int a[], int n)
{
    int k, en_buyuk_eleman;
/*
    ilk eleman en büyük kabul ediliyor 
*/
    en_buyuk_eleman = a[0];
    for (k=1; k<n; k++)
        if ( a[k] > en_buyuk_eleman ) 
            en_buyuk_eleman = a[k];
   return en_buyuk_eleman;
}


