/* 
    11prg09.c++: Bir fonksiyonun adresini öðrenme. 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

int f(int n)
{
	int f=1, i;
  	for (i=1; i<n; i++)
    f*=i;
   	return f;
}

int main()
{
  	int (*pf)(int);
  	pf = &f;
  	printf ("Fonksiyonun adresi = %p\n", &f);
  	printf ("Fonksiyonun adresi = %p\n", *pf);

  return 0;
}
