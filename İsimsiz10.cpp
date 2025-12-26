#include<iostream>	
using namespace std;

int main ()
{
	int n,i,toplam=0;
	cout<<"n sayisini gir=";
	cin>>n;
	{
		for(i=1;i<=n;i++)
	toplam=i+toplam;
				}
	cout<<"n e kadar olan sayilarin toplami="<<toplam;
	return 0;
}
