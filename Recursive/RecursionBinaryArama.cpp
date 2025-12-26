//ikili arama RECURSÝON ile
#include <iostream>
using namespace std;
int binary(int[],int,int,int);
int main()
{
    int orta,baslangic=0,boyut,tut,aranan;
    cout<<"Dizinin Boyutunu giriniz:";
    cin>>boyut;
    int dizi[boyut];
    //dizinin elemanlari alinir.
    for(int i=0;i<boyut;i++)
    {
    cout<<i<<".indis==";
    cin>>dizi[i];        
    }    
    
    //dizinin sýralanmasý gerekir.
    for(int i=0;i<boyut;i++)
       for(int j=i+1;j<boyut;j++)
          if(dizi[i]>dizi[j])
          {
          tut=dizi[i];
          dizi[i]=dizi[j];
          dizi[j]=tut;                   
          }    
          
    //sýralanan dizi ekrana yazdýrýlýr.
    for(int i=0;i<boyut;i++)
    cout<<dizi[i]<<",";
    
    
    //aranan eleman kullanýcýdan ýstenýr.
    cout<<"hangi eleman:";
    cin>>aranan;
    
    //fonksiyon gönderilir.
    int sonuc=binary(dizi,aranan,baslangic,boyut);
    cout<<"aranan elemanin indisi:"<<sonuc;
cout<<endl;
system("pause");
}

                int binary(int dizi[],int ara,int bas,int boy)
                {
                    if(bas<=boy)
                    {
                    int ort=(bas+boy)/2; 
                       if(ara==dizi[ort])    
                         return ort;
                       else if(ara<dizi[ort])   
                         return binary(dizi,ara,bas,ort-1);
                       else
                         return binary(dizi,ara,ort+1,boy);    
                    }   
                }
    
