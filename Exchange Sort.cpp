#include<iostream>
using namespace std;

void exchange(int dizi[5]);

int main()
{
int dizi2[5]={11,2,334,454,52};
exchange(dizi2);
 return 0;
}
void exchange(int dizi[5])
{
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(dizi[j]>dizi[i+1])
			{
				swap(dizi[i],dizi[i+1]);
			}
		}
	}
	
	for(int m=0;m<5;m++)
	{
		cout<<dizi[m]<<"\t";
	}
}
