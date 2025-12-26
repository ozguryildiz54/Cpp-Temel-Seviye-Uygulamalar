#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main()
{
	
	int dizi[20],dizi1[20],dizi2[20];
	int sayi,sayi1,sayac=0;
	
	cout<<"a dizisinin eleman sayisi : ";
	cin>>sayi;
	
	cout<<"b dizisinin eleman sayisi : ";
	cin>>sayi1;
	

   cout<<"a dizisinin elemanlarini girin : "<<endl;
   
	for(int a=0;a<sayi;a++)
	{
		
		cout<<a<<".indis = ";
		cin>>dizi[a];
		
	}
	
	cout<<"b dizisinin elemanlarini girin : "<<endl;
   
	for(int b=0;b<sayi1;b++)
	{
		
		cout<<b<<".indis = ";
		cin>>dizi1[b];
		
	}
	

   
  

	for(int c=0;c<sayi;c++)
	{
  

	for(int d=0; d <sayi1;d++)
   { 
     
	if(dizi1[d]==dizi[d+c])
	  sayac = sayac+1;
	  
	} 
	  
	  dizi2[c]=sayac;
	  sayac=0;
    }
    
    int sayi3 =sayi-sayi1+1;

    
    for(int i=0;i<sayi3;i++)
    
     cout<<"c dizisinin "<<i<<". indis = "<<dizi2[i]<<endl;
    

    
	
	
	
	getch();
	return 0;
	
}
