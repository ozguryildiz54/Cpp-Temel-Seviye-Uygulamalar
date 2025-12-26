#include <iostream>
using namespace std;
void taban(int);
int main()
{
    int sayi;
    cout<<"ikilik tabana cevrilecek sayiyi giriniz:";
    cin>>sayi;
    taban(sayi);
cout<<endl;
system("pause");    
}

   void taban(int s)
   {
      if(s<2)
      cout<<s;
      else
      {
      cout<<s%2;
      s=s/2;
      taban(s);
      }     
   }
