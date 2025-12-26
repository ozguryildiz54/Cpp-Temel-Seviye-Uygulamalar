//Girilen pozitif cift sayilarin ortalmasini bulan program...
#include<iostream>
using namespace std;
int main()
{
	int sayac=0,toplam=0,sayi=0,say=0,i;
	float ort;
	for(i=1;i<=5;i++)
	{
		cout<<i;
		cout<<"sayiyi giriniz=";cin>>sayi;
		if(sayi%2==0&&sayi>0)
		{
			say++;
			toplam=sayi++;
		}
	}
	ort=toplam/say;
	cout<<"sayilarin ortalamasi="<<ort;
	return 0;
}
