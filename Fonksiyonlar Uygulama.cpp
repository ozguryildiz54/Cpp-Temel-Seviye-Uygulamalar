#include<iostream>
using namespace std;
int topla(int x, int y);
void f1();
void f2();
void f4(int &l);
void f3(int *k);
int main()
{
int a,b;
cin>>a>>b;
cout<<topla(a,b)<<endl;
cout<<"1\n";
cout<<"2\n";
f1();
cout<<"7\n";
cout<<"8\n";
cout<<f3;
cout<<f4;
 return 0;
}
void f4(int &l)
{
	l=l+10;
}
void f3(int *k)
{
	*k=*k+10;
}
void f1()
{
	cout<<"f1-3\n";
	cout<<"f1-4\n";
	f2();
}
void f2()
	{
		cout<<"f2-5\n";
		cout<<"f2-6\n";
	}
int topla(int x, int y)
{
int z;
z=x+y;
return z;
}
