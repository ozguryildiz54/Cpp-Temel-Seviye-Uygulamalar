/*
    11prg07.c++: iki sayýnýn birbiri ile takas edilmesi….
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

void takas (int *, int *);

int main()
{
    int a, b;
    a=22; b=33;
    cout << "takas oncesi : a = " << a << "  b = " << b << endl;
   
    takas(&a, &b);

    printf("takas sonrasi: a = %d  b = %d\n", a, b);
   
    return 0;
}
void takas (int *x, int *y)
{
    int gecici;
    gecici = *x;
    *x = *y;
    *y =  gecici;
}
