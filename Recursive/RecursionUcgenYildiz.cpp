#include <iostream>
using namespace std;
void yildiz(int);
int main()
{
    int satir;
    cout<<"Kac satir yildiz:";
    cin>>satir;
    yildiz(satir);
cout<<endl;
system("pause");    
}

   void yildiz(int sat)
   {
     if(sat>0)
         {
         yildiz(sat-1);
         for(int i=0;i<sat;i++)
         cout<<"*";
         
         cout<<endl;
         }     
   }
