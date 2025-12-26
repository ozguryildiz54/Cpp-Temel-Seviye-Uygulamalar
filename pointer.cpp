/*
	pointer ornekleri 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

int main ()
{
    int sayi, *psayi;
    const int sabit = 5;
    
    cout << "Bir sayi giriniz:";
    cin >> sayi;
    
	psayi = &sayi;
    
    cout << "\nGirilen Sayinin :" << endl;
    cout << "=================="<< endl;
	cout << "\nsayi           : " << sayi << endl;
    cout << "sayi adresi    : " << &sayi << endl;
    cout << "\nsayi+1 sayisi  : " << sayi+1 << endl;
    cout << "sayi+1 adresi  : " << &sayi+1 << endl;
    cout << "\n*psayi ramdeki icerigi : " << *psayi << endl;
    cout << "*psayi+1               : " << *psayi+1 << endl;
    cout << "\nsabit = 5 sayisinin adresi : " << &sabit << endl;	
	return 0;
}
