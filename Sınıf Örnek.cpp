#include <iostream>
#include <conio.h>
using namespace std;

class deneme
{
	private:
		int x;
	public:
		void f1(int no)
		{
			x=no;
		}
		int f2();
}nesne1, nesne2;

int deneme::f2()
{
	return x;
}

int main()
{
	nesne1.f1(54);
	cout<<"Nesne1:\t";
	cout<<nesne1.f2()<<endl;
	nesne2.f1(58);
	cout<<"Nesne2:\t";
	cout<<nesne2.f2()<<endl;
	getch();
	return 0;
}
