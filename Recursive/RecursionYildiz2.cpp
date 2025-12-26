#include <iostream>
using namespace std;
void yildiz2(int);
int main()
{
    int satir;
    cout<<"kac satir yildiz:";
    cin>>satir;
    yildiz2(satir);
cout<<endl;
system("pause");    
}
   void yildiz2(int sat)
   {
      if(sat>0)
      {
         for(int i=0;i<sat;i++)
         cout<<"*";
         
         cout<<endl;
         
         yildiz2(sat-1);
         
         for(int j=0;j<sat;j++)
         cout<<"*";     
         
         cout<<endl;    
      }     
   }
