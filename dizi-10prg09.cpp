/*
    10prg09.c++: 3x3 boyutundaki iki kare matrisin çarpýmý. 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#define N 3
using namespace std; 

int main()
{
    int a[N][N], b[N][N], c[N][N];
    int i, j, k;
/*
	A matrisi veri girisi ......
*/
	cout << "A matrisi : \n"; 
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
        	{
        		cout << i+1 << ". satir " << j+1 << ". sutun elemanini giriniz : "; 
        		cin >> a[i][j];
			}
/*
	B matrisi veri girisi ......
*/	
	cout << "\nB matrisi : \n" ;       
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
        	{
        		cout << i+1 << ". satir " << j+1 << ". sutun elemanini giriniz : "; 
        		cin >> b[i][j];
			}
/*
	matris carpimi ......
*/
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
        	c[i][j]=0;
            for (k=0; k<N; k++)
				c[i][j] = c[i][j] + a[i][k]*b[k][j];
		}
    }
    
/*
	A matrisinin yazdirilmasi ......
*/
	cout << "\nA matrisi : \n" ;   	
	for (i=0; i<N; i++)
    {
	    for (j=0; j<N; j++)
       		cout << setw(3) << a[i][j];
    cout << endl;
	}
/*
	B matrisinin yazdirilmasi ......
*/
	cout << "\nB matrisi : \n" ;   
	for (i=0; i<N; i++)
    {
	    for (j=0; j<N; j++)
       		cout << setw(3) << b[i][j];
    cout << endl;
	}
/*
	c matrisinin yazdirilmasi ......
*/
	cout << "\nC matrisi : \n" ;   
	for (i=0; i<N; i++)
    {
	    for (j=0; j<N; j++)
       		cout << setw(3) << c[i][j];
    cout << endl;
	}
    
	return 0;
}


