// sayilarin birbirine esit olmamalarina gore islemler...
#include<iostream>

using namespace std;

int main()
{
	int x,y;
	cout<<"sayi1 i gir:";
	cin>>x;
	cout<<"sayi2 i gir:";
	cin>>y;
	if(x=y)
	{
		cout<<"girilen sayilar birbirine esit ve karenin alani:"<<x*y;
		
	}
	
	else if(x=!y) 
	 cout<<"girilen sayilar birbirine esit degil ve dikdortgenin alani:"<<x*y;
return 0;	
}
