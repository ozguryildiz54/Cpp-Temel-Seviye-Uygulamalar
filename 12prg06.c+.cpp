/*
	12prg06.c++: Bir katarý baþka bir katara ekleme ....
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
	char mesaj [20] = "Merhaba !... ";    /* 1. katar */
   	char isim [10];                       /* 2. katar */
	cout << "Adiniz ? : ";
   	cin >> isim ;                         /* scanf ("%s", isim);

     ekleme iþlemi .....
*/
   	strcat (mesaj, isim);
   	cout << mesaj;                       // printf ("%s\n", mesaj);

 return 0;
}
