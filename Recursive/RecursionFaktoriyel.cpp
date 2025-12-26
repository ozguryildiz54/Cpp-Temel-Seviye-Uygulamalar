#include <iostream>
using namespace std;
int fakt(int);
int main()
{
   int sayi;
   cout<<"Faktoriyeli alinacak sayiyi giriniz:";   
   cin>>sayi;
   cout<<"Sonuc:"<<fakt(sayi);
cout<<endl;
system("pause");    
}
   int fakt(int s)
   {
     if(s==1)
     return 1;
     else
     return (s*fakt(s-1));    
   }
