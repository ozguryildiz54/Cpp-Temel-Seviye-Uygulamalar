#include <iostream>
using namespace std;
int main()
{
int boyut,tut,onceki;
cout<<"dizinin boyutunu giriniZ:";
cin>>boyut;

int dizi[boyut];
for(int i=0;i<boyut;i++)
{
cout<<"dizi["<<i<<"]=";
cin>>dizi[i];        
}

//Insertion sort
for(int i=1;i<boyut;i++)
{
   tut=dizi[i];
   onceki=i-1; 
       while(onceki>=0 && dizi[onceki]>tut)
       {
       dizi[onceki+1]=dizi[onceki];
       onceki--;                
       }       
   dizi[onceki+1]=tut;
}

//sýralanan dizi yazdýrýlýr.
for(int i=0;i<boyut;i++)
cout<<dizi[i]<<",";

cout<<endl;
system("pause");
}
