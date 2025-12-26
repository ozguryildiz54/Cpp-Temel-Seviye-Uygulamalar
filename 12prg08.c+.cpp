/*
	12prg08.c++ : Kabarcýk sýralama (bubble sort) algoritmasý 
	        yardýmý ile isimleri alfabetik sýrayla listeleme.... 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>
#define n 5

using namespace std;

int main()
{
	char isim[n][8] = { "Semra", "Mustafa", "Ceyhun", "Asli", "Leyla" };
  	char gecici[8];
  	int i, j, k;

  	puts ("Siralamadan once :\n=================");
  	for (i=0; i<n; i++)
     	cout <<"  " << isim[i] << endl; 
/* 
	sýralama ............
*/
	for (k=0; k<n-1; k++)
		for (j=0; j<n-1; j++)
    		if (strcmp (isim[j], isim[j+1])>0)  /* isim[j]>isim[j+1] ? */
    		{
      			strcpy(gecici , isim[j]);
      			strcpy(isim[j], isim[j+1]);
      			strcpy(isim[j+1], gecici);
    		}
  	puts ("\nSiralamadan sonra :\n===================");  
  	for (i=0; i<n; i++)
    	cout <<"  " << isim[i] << endl; 

 return 0;
}
