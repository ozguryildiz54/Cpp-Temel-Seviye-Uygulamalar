#include <iostream>
using namespace std;
int main()
{
int boyut,tut;
cout<<"dizinin boyutunu giriniZ:";
cin>>boyut;

int dizi[boyut];
for(int i=0;i<boyut;i++)
{
cout<<"dizi["<<i<<"]=";
cin>>dizi[i];        
}

//exchange sort
for(int i=0;i<boyut-1;i++)
   for(int j=i+1;j<boyut;j++)
      if(dizi[i]>dizi[j])
      {
      tut=dizi[i];
      dizi[i]=dizi[j];
      dizi[j]=tut;                   
      }

//sýralanan dizi yazdýrýlýr.
for(int i=0;i<boyut;i++)
cout<<dizi[i]<<",";

cout<<endl;
system("pause");
}
