//bir magazada tum urunler %15 indirimli.Bir urun adini ve etiket fiyatini girerek,urun adini,etiket fiyatini ve urunun indirilmis fiyatini bulan program...
#include<iostream>
using namespace std;

int main()
{
	float fiyat,indirim,in_fiyat;
	char urun[20];
	cout<<"urun adini giriniz";cin>>urun;
	cout<<"urun etiket fiyatini giriniz";cin>>fiyat;
	indirim=fiyat*15/100;
	in_fiyat=fiyat-indirim;
	cout<<"cikis*\n";
	cout<<"urun adi="<<urun;
	cout<<"\nurunun etiket fiyati="<<fiyat;
	cout<<"*nurunun indirilmis fiyati="<<in_fiyat;
	return 0;
} 
