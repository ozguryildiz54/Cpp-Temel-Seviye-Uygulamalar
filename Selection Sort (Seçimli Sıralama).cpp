#include<iostream>
using namespace std;

void  selectionSort(int a[5]);
void yazdir(int b[5]);

int main()
{
int c[5]={3,1,9,0,2};
selectionSort(c);
yazdir(c);


 return 0;
}

void  selectionSort(int a[5])
{
	int i,j,min;
	
	for(i=0;i<4;i++)
	{
		min=i;
		
		for(j=i+1;j<5;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		swap(a[i],a[min]);
	}
}

void yazdir(int b[5])
{
	for(int k=0;k<5;k++)
	{
		cout<<b[k]<<"\t";
	}
}
