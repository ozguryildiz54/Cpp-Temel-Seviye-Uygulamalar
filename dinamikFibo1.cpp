/*Programý kýsaca açýklamak gerekirse; girilen bir sayýnýn fibonacci deðerini, iki fonksiyona gönderiyorum. 
Bu fonksiyonlardan ilki problemi dinamik programlama yöntemi ile çözerken, diðeri recursive kavramý ile çözüyor. 
Aradaki performans farký þu noktada oluþuyor:

Dinamik Fibonacci fonksiyonunda hesaplanan her deðer bir diziye atýlýyor. 
Yani yeni bir deðer hesaplanýrken sýfýrdan bir hesaplama durumu söz konusu deðil. 
Önceki deðerler zaten dizide tutuluyordu.

REcursive Fibonacci fonksiyonunda ise her yeni deðer için tüm hesaplamalar sýfýrdan yapýlýyor. 
Yani zaten daha önce hesaplanan deðerler defalarca yeniden hesaplanýyor. 
Bu da haliyle büyük bir performans kaybýna neden oluyor.*/
#include <iostream>
using namespace std;

int dinamikFibo(int say);
int recursiveFibo(int sayi);

int main(){
    int sayi;

    cout<<"Bir sayi Giriniz:";
    cin>>sayi;
    cout<<"Dinamik Sonucu:";
    cout<<dinamikFibo(sayi)<<endl;
    cout<<"Recursive Sonucu:";
    cout<<recursiveFibo(sayi);
    cout<<endl;   
    system("pause");
}
  
int dinamikFibo(int n)
{
int sayilar[n+1];
        for(int i=0;i<=n;i++)
        {
              if(i==0)
                 sayilar[i]=0;
              if(i==1)
                 sayilar[i]=1;
              if(i>=2)
                 sayilar[i]=sayilar[i-1]+sayilar[i-2];  
        }
return sayilar[n];
}
//------------------------
//------------------------
int recursiveFibo(int n)
{
if(n==0) 
  return 0;
if(n==1)
  return 1;
return (recursiveFibo(n-1)+recursiveFibo(n-2));
}
