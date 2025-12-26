/*
    11prg10.c++:  Fonksiyon Pointeri ile türev hesabý.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

double f(double);
double turev( double (*)(double), double);

int main()
{
    double x = 1.1;
    cout << "\nFonksiyon x = " << x << " deki degeri = " << f(x) << endl;
    cout << "Fonksiyon x = " << x << " deki turevi = " << turev(f, x) << endl ;

  return 0;
}
/*
    türevi hesaplanacak fonksiyon . . . . .. . 
*/
double f(double x)
{
    return x*x*x - 2*x + 5.;
}
/* 
    sayýsal türev alan fonksiyon . . . . . . .
*/
double turev( double (*fonk)(double x), double x)
{
    double h = 1.0e-3;
    return (fonk(x+h)-fonk(x-h))/(2*h);
}
