#include<iostream>
#include<stdlib.h>
using namespace std;

void insertionSort(int a[5]);
void yazdir(int c[5]);

int main()
{
int b[5]={3,2,5,7,1};
insertionSort(b);
yazdir(b);

system("pause");
return 0;
}

void insertionSort(int a[5])
{
	int j, key;
	
	for(int i=0;i<5;i++)
	{
	 key=a[i];
	 j=i-1;
	 while(j>=0 && a[j]>key)
	 {
	 	a[j+1]=a[j];
	 	j--;
	 }
	 a[j+1]=key;
	}
	
}

void yazdir(int c[5])
{
	for(int k=0;k<5;k++)
	{
		cout<<c[k]<<"\t";
	}
}

