#include<iostream>
using namespace std;

void bubleSort(int dizi[]);

int main()
{
int dizi2[5];
dizi2[0]=5;
dizi2[1]=2;
dizi2[2]=8;
dizi2[3]=7;
dizi2[4]=4;

bubleSort(dizi2);

 return 0;
}
void bubleSort(int dizi[])
{
	int flag=1;
	while(flag)
	{
		for(int i=0;i<5;i++)
		{
			if(dizi[i]>dizi[i+1])
			{
				flag=1;
				swap(dizi[i],dizi[i+1]);
			}
			else
			flag=0;
		}
		if(flag==0)
			{
			cout<<"Siralama bitti.";
			break;
			}
	}
	for(int j=0;j<5;j++)
	{
		cout<<dizi[j]<<"\t";
	}
}
