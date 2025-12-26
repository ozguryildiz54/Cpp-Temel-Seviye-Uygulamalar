/* 11prg01.c++: ilk pointer programý */

#include <iostream>

int main()
{
    int *ptam, tam = 33;

   	ptam = &tam;

   	printf ("tam:  icerik = %d\n", tam);
   	printf ("tam:   adres = %p\n", &tam);
   	printf ("tam:   adres = %p\n", ptam);

 	return 0;
}





