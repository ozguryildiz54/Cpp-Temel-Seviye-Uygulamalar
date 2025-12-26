//mevsime gore klimayi acip acmama durumu
#include<iostream>
using namespace std;
int main()
{
	int hava,mevsim;
	cout<<"hava nasil?\n";
	cout<<"\t(1)sicak\n";
	cout<<"\t(2)soguk\n";
	cin>>hava;
	cout<<"mevsim?\n";
	cout<<"\t(1)sonbahar\n";
	cout<<"\t(2)kis\n";
	cout<<"\t(3)yaz\n";
	cin>>mevsim;
	if(hava==1&&mevsim==1)
	cout<<"klimayi 20 derecede calistirin\n";
	else 
	cout<<"klimayi 25 derecede calistirin\n";
	return 0;
}
