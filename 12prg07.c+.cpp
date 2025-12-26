/*
	12prg07.c++: Bir karakter dizisinin uzunluðunu bulma programý… 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
	char s [20];
   	int k = 0;
	cout << "Bir seyler yaziniz : ";
   	cin >> s;
/*
	sonlandýrýcý karaktere kadar ......
*/
	while(s[k] != '\0')
    	k++;
 	puts ("\nDizinin uzunlugu  :");
 	cout << setfill ('=') << setw (31) << "=" << endl;
   	cout << "strlen komutu (kullanarak)  : " << strlen(s);
   	cout << "\nstrlen komutu (kullanmadan) : " << k;

 return 0;
}
