/*
	12prg00.c++: Bir stringin (katarin) içindeki 'm' karakterlerinin
				 sayýsý bulma programý ...
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
	char str[20];
   	int  i, sayac=0;
	cout << "Bir string giriniz : ";
    gets(str);
	for(i=0; str[i] != '\0'; i++)
    	if(str[i] == 'm') sayac++;
	cout << "String icindeki 'm' karakterlerinin sayisi : " << sayac;

 return 0;
}


