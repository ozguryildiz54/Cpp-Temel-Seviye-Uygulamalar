#include <iostream>
using namespace std;
void karakter_bas(int,char);
int main()
{
    int sayi;
    char karakter;
    cout<<"Kac tane karakter:";
    cin>>sayi;
    cout<<"Hangi karakter:";
    cin>>karakter;
    karakter_bas(sayi,karakter);
cout<<endl;
system("pause");    
}

   void karakter_bas(int s,char k)
   {
      if(s==1)
        cout<<k;
      else
        {
        cout<<k;
        karakter_bas(s-1,k);      
        }    
   }
