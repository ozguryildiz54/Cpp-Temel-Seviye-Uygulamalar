
#include<iostream>
#include<conio.h>
?#?define? SATIR 3
#define SUTUN 4
using namespace std;
int main()
{
int dizi[SATIR][SUTUN];
int i,j;
int satir_toplam[SATIR];
int sutun_toplam[SUTUN];
float satir_ort[SATIR];
float sutun_ort[SUTUN];
int minx[SATIR];
int maxx[SATIR];
int miny[SUTUN];
int maxy[SUTUN];
for(i=0;i<SATIR;i++)
{
satir_toplam[i]=0;
minx[i]=65535;
maxx[i]=0;
}
for(j=0;j<SUTUN;j++)
{
sutun_toplam[j]=0;
miny[j]=65535;
maxy[j]=0;
}
for(i=0;i<SATIR;i++)
{
for(j=0;j<SUTUN;j++)
{
cout<<endl<<(i+1)<<". satir "<<(j+1)<<". sutun :";
cin>>dizi[i][j];
satir_toplam[i]=satir_toplam[i]+dizi[i][j];
if (dizi[i][j]<minx[i]) minx[i]=dizi[i][j]; 
if (dizi[i][j]>maxx[i]) maxx[i]=dizi[i][j];
}
satir_ort[i]=satir_toplam[i]/(SUTUN*1.0);
}
for(j=0;j<SUTUN;j++)
{
for(i=0;i<SATIR;i++)
{
sutun_toplam[j]=sutun_toplam[j]+dizi[i][j];
if (dizi[i][j]<miny[j]) miny[j]=dizi[i][j]; 
if (dizi[i][j]>maxy[j]) maxy[j]=dizi[i][j];
}
sutun_ort[j]=sutun_toplam[j]/(SATIR*1.0);
}
for(i=0;i<SATIR;i++)
{
cout<<endl<<(i+1)<<". satir toplami= "<<satir_toplam[i];
cout<<endl<<(i+1)<<". satir ortalamasi= "<<satir_ort[i];
cout<<endl<<(i+1)<<". satir en kucuk degeri = "<<minx[i];
cout<<endl<<(i+1)<<". satir en buyuk degeri = "<<maxx[i];
}
for(j=0;j<SUTUN;j++)
{
cout<<endl<<(j+1)<<". sutun toplami= "<<sutun_toplam[j];
cout<<endl<<(j+1)<<". sutun ortalamasi= "<<sutun_ort[j];
cout<<endl<<(j+1)<<". sutun en kucuk degeri = "<<miny[j];
cout<<endl<<(j+1)<<". sutun en buyuk degeri = "<<maxy[j];
}
getch();
return 0; 
}
