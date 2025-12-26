/*
	12prg00.c++: Elemanlarý katar olan karakter dizisini yazdýrma 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
	char *gun[7] = { "Pazartesi", "Sali", "Carsamba",  "Persembe", 
                    "Cuma", "Cumartesi", "Pazar" };
  	int i;

  	for(i=0; i<7; i++)
  		cout << i+1 << ". " << gun[i] << endl;

 return 0;
}
