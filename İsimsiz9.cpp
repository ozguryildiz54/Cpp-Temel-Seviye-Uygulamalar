// 5-80 arasinda 3 ve 5 e tam bolunen sayilarin toplamini bulan program...
#include<iostream>
using namespace std;
int main()
{
	int toplam=0,i;
	for(i=5;i<80;i++)
	{
		if(i%15==0)
		toplam=i+toplam;
	}
	cout<<"5-80 arasindaki 3 ve 5 e bolunen sayilarin toplami="<<toplam;
	return 0;	
}
