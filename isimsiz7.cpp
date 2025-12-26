// Girilen 5 kisinin yaslarindan kac tanesinin 20 yasinda oldugunu bulan program...
#include<iostream>
using namespace std;
int main()
{
	int sayac=0,s=0,a=1,yas;
	while(sayac<=5)
	{
		cout<<"a";cout<<".kisinin yasini giriniz:";
		cin>>yas;
		if(yas==20)
		s=s+1;
		sayac++;
	}
	cout<<"su kadar kisi 20 yasinda="<<s;
	return 0;
	
}
