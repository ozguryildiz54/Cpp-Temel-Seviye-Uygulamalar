// sayilarin esit olmamalarina  gore islemler...
#include <iostream>
using namespace std;
int main()
{
   int x,y;
   cout<<"sayi 1 i giriniz:";cin>>x;
   cout<<"sayi 2 i giriniz:";cin>>y;
   if(x==y)
   {
       cout<<"girilen sayilar birbirine esit ve karenin alani:"<<x*y;
   }
   else
   cout<<"girilen sayilar birbirine esit degil dikdortgenin alani :"<<x*y;
return 0;
}


