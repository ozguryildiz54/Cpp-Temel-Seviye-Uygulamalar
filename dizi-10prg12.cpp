/*
	10prg12.c++ : 3x3 lük bir matrisin izinin fonksiyon yardýmý ile hesaplanmasý.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#define N  3

using namespace std;

double iz(double a[][3], int);

int main()
{
    double a [3][3], izA;
    int i, j;
    puts ("matrisi giriniz :");
    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
            cin >> setw(3) >> a[i][j];
            izA = iz (a, 3);
    cout << "\nMatrisin izi = " << setw (3) << izA;
      
    return 0;
}

double iz (double a[][3], int n)
{
    int i;
    double toplam = 0.0;
    for (i=0; i<n; i++)
        toplam += a[i][i];
 	return toplam;
}


