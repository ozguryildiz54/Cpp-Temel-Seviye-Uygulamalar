/*
    11prg08.c++:  geri donus degeri pointeri olan fonksiyon yardýmýyla bulma.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

double* EnBuyukAdres(double a[], int boyut);

int main()
{
    double x[6] = {1.1, 3.3, 7.1, 5.4, 0.2, -1.5};
    double *p;
    int k;
/*
    indis, dizi ve adresini ekrana bas
*/
    for (k=0; k<6; k++)
    {
    	cout << "Dizi[" << k << "] = " << setw(4) << x[k] << "   " << &x[k] << endl;
    }
    p = EnBuyukAdres(x, 6);
	cout << endl;
    cout << "En buyuk deger : " << *p << endl;
    cout << "En buyuk adres : " << p << endl;
    cout << "En buyuk konum : " << int(p-&x[0]);
   
    return 0;
}
double* EnBuyukAdres(double a[], int boyut)
{
    double  enbuyukdeger =  a[0];
    double *enbuyukadres = &a[0];
    int i;
    for (i=1; i<boyut; i++)
    {
        if (a[i]>enbuyukdeger)
        {
          enbuyukdeger =  a[i];                  // en büyük deger
          enbuyukadres = &a[i];                  // en büyük icerikli adres
        }
    }
    return enbuyukadres;
}
