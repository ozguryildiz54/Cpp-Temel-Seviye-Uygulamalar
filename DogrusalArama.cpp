#include <iostream>
using namespace std;
int main()
{
   int boyut,aranan,dur=0;
   cout<<"Dizinin Boyutunu giriniz:";
   cin>>boyut;
   int dizi[boyut];
     for(int i=0;i<boyut;i++)
     {
     cout<<"dizi["<<i<<"]=";
     cin>>dizi[i];
     }
        cout<<"Aranan elemani giriniz:";
        cin>>aranan;
        
        for(int j=0;j<boyut;j++)
        {
           if(dizi[j]==aranan)
           {
           cout<<"aranan elemanin indisi "<<j<<" dir.";
           dur=1; 
           }       
        }
        
        if(dur==0)
        cout<<"Eleman Bulunamadi..";
cout<<endl;
system("pause");    
}
