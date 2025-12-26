#include<iostream>
using namespace std;

void dogrusalArama(int dizi[5], int elaman);
int verigir(int dizi3[5], int m);
int main()
{
	int dizi2[5];
	int n;
	verigir(dizi2,n);


 return 0;
}
void dogrusalArama(int dizi[5], int elaman)
{
	int i=0,flag=0;
	for(int i=0;i<5;i++)
	{
		if(dizi[i]==elaman)
		{
			flag=1;
			cout<<"Elaman bulundu!"<<i+1<<"sira\n";
			break;
		 	 
	    }	
		if(i==4&&flag==0)
		{
			cout<<"Bulunamadi!";
		}
		
	}
}

int verigir(int dizi3[5], int m)
{
	cout<<"diziye 5 tane elaman gir!";
	for(int j=0;j<5;j++)
	{
		cin>>dizi3[j];
	}
	cout<<"Hangi elamani ariyorsun?";
	cin>>m;
 dogrusalArama(dizi3,m);
}
	
	
	
	
	
	
	
	
	
