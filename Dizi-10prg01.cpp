/* 
   10prg01.c++: 10 tamsayýnýn aritmetik ortalamasýný hesabý.
*/
#include <iostream>
#include<iomanip>
#include <cmath>
#define N 10
using namespace std;

int main()
{
    int i;
    float x[N], ort, toplam = 0.0;

    for (i=0;  i<N;  i++)
    {
 /* 
    i. elemaný okunuyor ...
*/

 	   	cout << "Dizinin " << i+1 << ". elemani : ";
    	cin >> x [i];  
    	toplam += x [i];
    }
  	ort = toplam/N;
  	cout << "Sayilarin ortalamasi = " << ort << endl;

 	return 0;
}

