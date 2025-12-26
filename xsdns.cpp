#include<iostream>
#include<string>

using namespace std;


void KimlikGir();
void KimlikListele();
int main()
{
	string KimlikAd[2];
	string KimlikSoyad[2];
	string KimlikNo[2];


	cout << "Sirasiyla ad, soyad ve numaranizi giriniz." << endl;

	KimlikGir(KimlikAd, KimlikSoyad);
	KimlikListele(KimlikAd, KimlikSoyad);


	system("pause");
	return 0;

}
void KimlikGir(string Ad[],string Soyad[])
{
	for (int i = 0; i <2; i++)
	{
		cin >> Ad[i];
		cin >> Soyad[i];
	}


}
void KimlikListele(string Ad[],string Soyad[])
{
	for (int j = 0; j < 2; j++)
	{
		cout << Ad[j]<<endl;
		cout << Soyad[j]<<endl;
	}
}


