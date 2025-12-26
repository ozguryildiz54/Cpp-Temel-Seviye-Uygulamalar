/*
	12prg00.c++: Bir katarý diðer bir katara kopyalama ...
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
   	char str1 [] = "Cumhuriyet Universitesi";
   	char str2 [24], str3[24];
   	int i;
/* 
	strcpy kullanarak  kopyalama ....
*/
   strcpy (str2, str1);
/* 
	strcpy kullanmadan kopyalama .....
*/
	for (i=0; str1[i]; i++)
    	str3[i] = str1[i];
   		str3[i] = '\0';      // sonlandýrýcý ekle...
/* 
	sonuçlar ekrana ......
*/
   cout << "\nstr1 : " << str1 << endl;  //printf ("str1 : %s\n",str1);
   cout << "\nstr2 : " << str2 << endl;  //printf ("str2 : %s\n",str2);
   cout << "\nstr3 : " << str3 << endl;  //printf ("str3 : %s\n",str3);

 return 0;
}
