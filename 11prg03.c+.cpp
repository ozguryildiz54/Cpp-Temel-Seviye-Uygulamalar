/* 10prg03.c++: pointer aritmetiði */

#include <iostream>

int main()
{
    char   *pk, k = 'a';
   	int    *pt, t = 22;
   	double *pg, g = 5.5;

   	pk = &k;
   	pt = &t;
   	pg = &g;

   	printf("Onceki adresler: pk= %p pt= %p pg= %p \n", pk, pt, pg);

   	pk++;
   	pt--;
   	pg = pg + 10;

   	printf("Sonraki adresler: pk= %p  pt= %p   pg= %p \n", pk, pt, pg);

 	return 0;
}





