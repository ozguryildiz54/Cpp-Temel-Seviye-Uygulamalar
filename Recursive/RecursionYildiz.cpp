#include <iostream>
using namespace std;
void yildiz(int);
int main()
{
  int n;
  cout<<"Kac tane yildiz:";
  cin>>n;  
  yildiz(n);
cout<<endl;
system("pause");    
}

   void yildiz(int nn)
   {
     if(nn==1)
     cout<<"*";
     else
     {
     cout<<"*";
     yildiz(nn-1);
     }     
   }
