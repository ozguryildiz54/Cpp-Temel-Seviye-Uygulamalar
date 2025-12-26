/*
	12prg09.c++: Bir katarýn uzunluðunu bulan 
	             strlen benzeri bir fonksiyon .... 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

//int struzn (char *);

int main()
{
	char *s;
    cout << "Bir katar giriniz : ";  
    gets (s);
//    printf ("Uzunlugu (struzn) : %d\n", struzn(s));
    printf("Uzunlugu (strlen) : %s\n", strlen(s));
   
 	return 0;
}
/* 
    bir karakter dizisinin uzunluðunu hesaplama

int struzn (char *str)
{
  	int n = 0;
  	while (str[n]) 
    	n++;
  	return n;
}*/
