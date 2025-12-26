#include<iostream>
using namespace std;

int f1(int n);

int main()
{
cout<<"Deger gir!\n";
int a;
cin>>a;
cout<<f1(a);
 return 0;
}
int f1(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*f1(n-1);
	}
}

