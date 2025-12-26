#include <iostream>
using namespace std;
int main()
{
int boyut,tut,enkucuk;
cout<<"dizinin boyutunu giriniZ:";
cin>>boyut;

int dizi[boyut];
for(int i=0;i<boyut;i++)
{
cout<<"dizi["<<i<<"]=";
cin>>dizi[i];        
}

//selection sort
for(int i=0;i<boyut-1;i++)
{
enkucuk=i;
   for(int j=i+1;j<boyut;j++)
   {
      if(dizi[j]<dizi[enkucuk])
      enkucuk=j;
   }  
   tut=dizi[i];
   dizi[i]=dizi[enkucuk];
   dizi[enkucuk]=tut;      
}

//sýralanan dizi yazdýrýlýr.
for(int i=0;i<boyut;i++)
cout<<dizi[i]<<",";

cout<<endl;
system("pause");
}
