/* 
    11prg06.c++: Deðer ve adres geçerek aktarma yapma……
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

void F1 (int  );                          /* iki fonksiyon */
void F2 (int *);

int main ()
{
    int x = 55;

    cout << "x in degeri \n" << endl;
    cout << "Fonksiyonlar cagrilmadan once : " << x << endl;
    cout << endl;
/*
	F1 fonksiyonu çaðrýlýyor...
*/ 
    F1 (x);     
    cout << "F1 cagirildiktan sonra        : " << x << endl;
/*
	F2 fonksiyonu çaðrýlýyor...
*/ 
    F2(&x);
    cout  << "F2 cagirildiktan sonra        : " << x << endl;

 return 0;
}
/* 
	Deðer geçerek aktarým 
*/
    void F1 (int n)
{
    n = 66;
    cout  << "F1 fonksiyonu icinde          : " << n << endl;
}
/*
    Adres geçerek aktarým 
*/
    void F2 (int *n)
{
    *n = 77;
    printf("F2 fonksiyonu icinde          : %d\n",*n);
}
