#include<iostream>
using namespace std;

void ikiliArama(int dizi[5], int key, int sag, int sol);

int main()
{
int dizi2[5];
dizi2[0]=1;
dizi2[1]=2;
dizi2[2]=3;
dizi2[3]=4;
dizi2[4]=5;
int a;
cout<<"Key gir!\n";
cin>>a;
int b=0;
ikiliArama(dizi2,a,5,b);
 return 0;
}
void ikiliArama(int dizi[], int key, int sag, int sol)
{
	int orta;
	int flag=0;
	for(int i=0;i<5;i++)
	{
		orta=(sag+sol)/2;
		if(key==dizi[orta])
		{
			flag=1;
			cout<<"Bulundu.Sira:"<<orta+1<<endl;
			break;
		}
		else if(key>dizi[orta])
		{
			sol=orta+1;
		}
		else if(key<dizi[orta])
		{
			sag=orta-1;
		}
	}
	if(flag==0)
	{
		cout<<"Bulunamadi!\n";
	}
}

