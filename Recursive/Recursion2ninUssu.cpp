#include <iostream>
using namespace std;
int us_alma(int);
int k=1;
int main()
{
    int us;
    cout<<"2 uzeri kac:";
    cin>>us;
    cout<<"Sonuc:"<<us_alma(us);
cout<<endl;
system("pause");    
}

   int us_alma(int kuvvet)
   {
     if(kuvvet==0)
       return 1;
     else
       {
       k=k*2;
       us_alma(kuvvet-1);        
       }
       
   return k; 
   }
