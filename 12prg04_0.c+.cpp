/*
	12prg04.c++: Basit bir þifre programý. Kullanýcý en fazla
	            3 kez yanlýþ girme þifre girebilir.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
	char sifre[8];
   	int  sonuc, hak=3;
	while( hak-- > 0 )
   	{
    	cout << "Sifre giriniz : ";
      	gets (sifre);                    	/* þifreyi al */
	    sonuc = strcmp (sifre, "elma%xj4");
	    if (sonuc==0)						/* þifre kontrol */
		{
		   	puts ("sifre dogru");
        	break;
    	}
      	else
         	puts ("sifre yanlis");
   }

 return 0;
}
