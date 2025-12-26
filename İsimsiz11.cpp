#include<iostream>

using namespace std;
int main ()

{
	int i;
	const int dizibuyuklugu=12;
	int a[dizibuyuklugu]={6,10,12,18,30,45,50,56,70,85,90,95};
	int toplam=0;
	{
	for(i=0;i<dizibuyuklugu;i++)
	toplam+=a[i];
	}
	cout<<"dizi elemanlarinin degerlerinin toplami="<<toplam<<endl;
	return 0;	
}

