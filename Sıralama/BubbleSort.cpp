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

//bubble sort
for(int i=0;i<boyut-1;i++)
   for(int j=0;j<boyut-1-i;j++)
      if(dizi[j]>dizi[j+1])
      {
      tut=dizi[j];
      dizi[j]=dizi[j+1];
      dizi[j+1]=tut;                     
      }
//sýralanan dizi gösterilir.
for(int k=0;k<boyut;k++)
cout<<dizi[k]<<",";

cout<<endl;
system("pause");    
}
