#include <iostream>
using namespace std;
int us_alma(int,int);
int k=1;
int main()
{
   int taban,us;
   cout<<"Taban degerini giriniz:";
   cin>>taban;
   cout<<"Us degerinini giriniz:";
   cin>>us;
   cout<<"Sonuc:"<<us_alma(taban,us);
cout<<endl;
system("pause");    
}

   int us_alma(int tabann,int uss)
   {
      if(uss==0)
        return 1;
      else
        {
        k=k*tabann;
        us_alma(tabann,(uss-1));       
        }
   return k;
   }
