/* 11prg00.c++: ilk pointer programý */

#include <iostream>
using namespace std;
int main()
{
   	int *ptam, tam = 57833;

   	ptam = &tam;

   	printf ("tam: icerik : %d\n", *ptam);
   	printf ("tam:  adres : %p\n", *ptam);
   	cout << &tam << endl;
   	cout << &ptam << endl;
	
	return 0;
}


