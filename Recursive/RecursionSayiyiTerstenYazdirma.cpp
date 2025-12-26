#include <iostream>
using namespace std;
void tersten(int);
int main()
{
    int sayi;
    cout<<"Tersten yazdiralacak sayiyi giriniz:";
    cin>>sayi;
    tersten(sayi);
cout<<endl;
system("pause");    
}

   void tersten(int s)
   {
      if(s<10)
      cout<<s;
      else
      {
      cout<<s%10;
      s=s/10;
      tersten(s);
      }     
   }
