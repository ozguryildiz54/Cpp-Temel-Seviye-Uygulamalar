#include <iostream>
#define max 100
using namespace std;
void duz(int);
int dizi[max];
int i=0;
int main()
{
  int sayi;
  cout<<"Sayiyi giriniz:";    
  cin>>sayi;
  duz(sayi);
cout<<endl;
system("pause");
}

   void duz(int s)
   {
      if(s<10)
          {
          cout<<s;
          for(int j=i-1;j>=0;j--)
          cout<<dizi[j];
          }
      else
         {
         dizi[i]=s%10;
         i++;
         s=s/10;
         duz(s);    
         }
          
   }
