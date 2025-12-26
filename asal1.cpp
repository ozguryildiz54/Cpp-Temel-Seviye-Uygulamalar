#include <iostream>
using namespace std;
int main()
{
int sayi,k=0;
cout<<"Bir sayi Giriniz:";
cin>>sayi;
   for(int i=2;i<sayi;i++)
      if(sayi%i==0)
         k++;
   
   if(k==0)
     cout<<sayi<<" sayisi Asaldir.";
   else
     cout<<sayi<<" sayisi Asal Degildir.";

cout<<endl;
system("pause");
}
