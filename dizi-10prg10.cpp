/*
    10prg10.c++: bir dizinin yazdýrýlmasý.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#define N  3
using namespace std;

void dizi_yaz (float x[], int n);

int main()
{
    float kutle [5]= { 8.471, 3.683, 9.107, 4.739, 3.918 };
    dizi_yaz (kutle, 5);

    return 0;
}

void dizi_yaz (float x[], int n)
{
   int i;
   for (i=0; i<n; i++)
        cout << setw(7) << x[i];
        cout << "\n";
}


