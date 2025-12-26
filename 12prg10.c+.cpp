/*
	12prg00.c++: Bir katarýn tersini veren bir fonksiyon ...
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

char *strcev(char *);

int main()
{
	char s[50];
    cout << "Bir katar giriniz : ";  
    cin >> s;                               // gets (s) veya scanf("%s",s);
    cout << "Katarin kendisi  : " << s << endl;
    cout << "Katarin tersi    : " << strcev(s);  //strcev(s) ile katarin ters cevirme...

 return 0;
}
/* 
	str katarýný ters-yüz etme ... 
*/
char *strcev (char *str)
{
	int  i, n;
  	char gecici;
	n = strlen (str);
	for (i=0; i<n/2; i++)
  	{
    	gecici = str[i];
     	str[i] = str[n-i-1];
     	str[n-i-1] = gecici;
  	}
  	return str; 			/* geri dönüþ deðeri bir gösterici */
}

