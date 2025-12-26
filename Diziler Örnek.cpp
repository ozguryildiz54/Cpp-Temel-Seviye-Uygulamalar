#include<iostream>
using namespace std;

int main()
{
	int dizi[5];	
	int dizi2[5];
	int i=0;
	int *pi;
	pi=dizi2;
	cout<<"-------------------------------------------------------------------"<<endl;
	do{
		dizi[i]=i;
		cout<<"dizi["<<i<<"]"<<dizi[i]<<"\tAdresi:"<<&dizi[i]<<endl<<endl;
		//cout<<"Dizi2 deger:"<<*pi<<"\tDizi2 adres:"<<pi<<endl;
	//	cout<<"Dizi2 deger["<<i<<"]:"<<pi<<endl;
		i++;
		pi++;
		//dizi2++;
	}while(i<5);
	cout<<"-------------------------------------------------------------------"<<endl;
	i=0;
		do{
		cout<<"Dizi2 deger:"<<*pi<<"\tDizi2 adres:"<<pi<<endl<<endl;
		//cout<<"Dizi2 deger["<<i<<"]:"<<pi<<endl;
		i++;
		pi++;
		//dizi2++;
	}while(i<5);
	cout<<"-------------------------------------------------------------------"<<endl;
	i=0;
		do{
		cout<<"Dizi2 deger["<<i<<"]:"<<pi<<endl<<endl;
		//Burada *dizi2 , &dizi2 ve dizi2 kullanýmlarýnýn hepsi adres gösterimi için ise aralarýndan birini kullanmanýn herhangi biriyle farký varmýdýr?
		i++;
		pi++;
		//dizi2++;
	}while(i<5);
cout<<"-------------------------------------------------------------------"<<endl;

cout<<"Ýki boyutlu diziler"<<endl;
int dizi3[3][3];
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		dizi3[i][j]=i+j+i*j;
	}
}

int *diziAdres;
diziAdres=dizi3[0];//*dizi3 ayný iþleve mi sahip?
for(int k=0;k<3;k++)
{
	for(int l=0;l<3;l++)
	{
		cout<<"DÝzi Deger Dizi3["<<k<<"]"<<"["<<l<<"]:"<<dizi3[k][l]<<"\t\tDizi Adres Dizi3["<<k<<"]"<<"["<<l<<"]:\t"<<diziAdres<<endl;
		diziAdres++;
	}
	

}
cout<<"-------------------------------------------------------------------"<<endl;
	int *dizi4[5];
	int i1=0, i2=1, i3=2, i4=3, i5=4;
dizi4[0]=&i1;
dizi4[1]=&i2;
dizi4[2]=&i3;
dizi4[3]=&i4;
dizi4[4]=&i5;

cout<<"Adres:\tAdres2:\t\tDeger:"<<endl;
for(int n=0;n<5;n++)
	{
		cout<<*dizi4[n]<<"\t"<<dizi4[n]<<"\t"<<&dizi4[n]<<endl;
	}
}
	

	
		
