/* 
    10prg06.c++: Bir karakter dizisinin uzunluðunu bulma.
 */
#include <iostream>
#include <iomanip>
using  namespace std;

int main(void)
{
   char s [40];
   int  k = 0;
 /*
    diziyi okutma iþlemi 
*/
    cout << "Bir seyler yaziniz :";
	gets (s);
/* 
    sonlandýrýcý karaktere kadar karakterleri say 
*/
    while (s[k]!='\0' )
    	k++;
    cout <<  "Dizinin uzunlugu  :"   << k << endl;
 return 0;
}

