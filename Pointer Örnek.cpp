#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=20;
	int *b;
	cout<<"b'nin degeri:\t";
	cout<<b<<endl;
	cout<<"b'nin adresi:\t";
	cout<<&b<<endl;
	cout<<"b'nin degerinin degeri:\t"; //deger adres olarak kabul edilir ve o adresde ki degere gdilir.
	cout<<*b<<endl;
	
	b=&a; //a'nýn adresi b'ye deger olarak atandi.
	cout<<"b'nin degeri:\t";
	cout<<b<<endl;
	cout<<"b'nin adresi:\t";
	cout<<&b<<endl;
	cout<<"b'nin degerinin degeri:\t"; //deger adres olarak kabul edilir ve o adresde ki degere gdilir.
	cout<<*b<<endl;
	cout<<"a'nin adresi:\t";
	cout<<&a<<endl;
	cout<<"a'nin degeri:\t";
	cout<<a<<endl;
	int x;
	b=&x;
	*b=10;
	cout<<"x'in adresi:";
	cout<<&x<<endl;
	cout<<"x'in degeri:";
	cout<<x<<endl;

	getch();
	return 0;
}
