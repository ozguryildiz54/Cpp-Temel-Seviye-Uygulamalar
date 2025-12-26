#include <iostream>
using namespace std;
int main()
{
    int n,t=1;
cout<<"2 uzeri kac?";
cin>>n;

int dizi[n];

for(int i=0;i<n;i++)
{
   if(i==0)
      dizi[0]=2;
   else
   {
      dizi[i]=dizi[0]*dizi[i-1];
   }
}

cout<<"Sonuc:"<<dizi[n-1];
    
cout<<endl;
system("pause");
}
