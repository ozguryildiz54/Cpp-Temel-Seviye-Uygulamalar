/*
	10prg04.c++ : Seçerek Sýralama (Selection Sort) Algoritmasý ile bir
	dizinin elemanlarýný büyükten küçüðe dogru sýralama.
*/
#include <iostream>
#include <iomanip>
#define n 10
using namespace std; 

int main (void)
{
	int a [n] = {100, -250, 400, 125 ,550, 900, 689, 450, 347, 700};
    int i, j, k, eb;
/*
    Dizinin kendisi
*/
    cout << "once : " ;
    for (k=0; k<n; k++)
    	cout << setw (5) << a[k] ;
/*
	Sýrala
*/
	for(k=0; k<n; k++)
	{
		eb = a[k]; 
        i = k;
		for(j=k+1; j<n; j++)
        	if( a[j]>eb )
			{
            	eb = a[j];
             	i = j; 
          	}
       a[i] = a[k];
       a[k] = eb;
	}
/*
	Sýralama bitti
*/
	cout << "\n" << "sonra: ";
   	for(k=0; k<n; k++)
    cout << setw(5) << a[k];
    cout << "\n";

 return 0;
}

