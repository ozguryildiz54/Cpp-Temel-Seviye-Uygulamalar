#include <iostream>
using namespace std;
int main()
{
    int boyut,tut,aranan,baslangic=0,orta;
    cout<<"Dizinin Boyutunu giriniz:";
    cin>>boyut;
    int dizi[boyut];
       for(int i=0;i<boyut;i++)//dizinin elemanlari alinir.
       {
       cout<<"dizi["<<i<<"]=";
       cin>>dizi[i];
       }
           for(int i=0;i<boyut-1;i++)//dizi sýralanýr
              for(int j=i+1;j<boyut;j++)
                  if(dizi[i]>dizi[j])//kucukten buyuge
                  {
                  tut=dizi[i];
                  dizi[i]=dizi[j];
                  dizi[j]=tut;                   
                  }
                       for(int i=0;i<boyut;i++)//sýralanmýs dizinin elemanlarý ekrana yazdýrýlýr.
                       cout<<dizi[i]<<",";
                       
                       cout<<"Hangi elemani ariyorsunuz:";//aranan eleman istenir.
                       cin>>aranan;
                          
                           while(baslangic<=boyut)//binary search (ÝKÝLÝ ARAMA)
                           {
                           orta=(baslangic+boyut)/2;
                              if(dizi[orta]==aranan)
                              {
                              cout<<"aranan elemanin indisi:"<<orta;
                              break;                      
                              }     
                              else if(aranan>dizi[orta])
                              baslangic=orta;
                              else
                              boyut=orta;                  
                           }
                       
cout<<endl;
system("pause");    
}
