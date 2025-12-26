/*
	Overloading functions ....
	Here, FUNCTION overloaded using different type of 
	arguments...
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;
 
int function (int a, int b);

double function (double a, double b);

int main ()
{
  int x=5, y=2;
  double n=5.0, m=2.0;
  cout << "Function (" << x << ", " << y << ") : " << setw(3) << function (x, y) << '\n';
  cout << "Function (" << n << ", " << m << ") : " << setw(5) << function (n, m) << '\n';
  
  return 0;
}

int function (int a, int b)
{
  	return (a*b);
}

double function (double a, double b)
{
  return (a/b);
}
