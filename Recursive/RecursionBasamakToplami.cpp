#include <iostream>
using namespace std;
int basamak_topla(int);

int i=0,dizi[100],t=0,k;

int main()
{
  int sayi;
  cout<<"sayi giriniz:";
  cin>>sayi;
  cout<<"sonuc:"<<basamak_topla(sayi);
cout<<endl;
system("pause");
}
   int basamak_topla(int s)
   {
   
      if(s<10)
        k=s;
      else
        {
        dizi[i]=s%10;
        t=t+dizi[i];
        i++;
        s=s/10;
        basamak_topla(s);
        }
   return (t+k);
   }
