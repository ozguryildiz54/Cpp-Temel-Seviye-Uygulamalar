// 100 e kadar olan sayilari toplama...
#include<iostream>
using namespace std;
int main()
{
	int sayac=1,toplam=0,sayi=0;
	while(sayac<101)
	{
		toplam=toplam+sayi;
		sayi++;
		sayac++;
	}
	cout<<"toplam="<<toplam;
	return 0;
}
