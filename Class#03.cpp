/*
	in a class, to define using variables into public  ......
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

class MyClass
{
	public:
		string ad;
		string soyad;	
};

int main ()
{
	MyClass object;
	cout << "Lutfen!... Fakulte Adini giriniz : ";
	cin >> object.ad;
	cout << "Lutfen!... Bolum adini giriniz   : ";
	cin >> object.soyad;
	cout << "\n" << object.ad << " " << object.soyad;
	
	return 0;	
}
