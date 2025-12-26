/* 
	14prg02.c++: Bir dizinin elemanlarýný küçükten
				 büyüðe doðru sýralama  */

#include <iostream>
#include <cstdlib>
using namespace std;
/* Bir dizinin elemanlarýný küçükten büyüðe doðru sýralama */
void sirala (int *a, int n);

int main()
{
   int i, x[5] = {22, 44, 11, 55, 33};

   	cout << "Once : ";
   	for(i=0; i<5; i++)
      	cout << "   " << x[i];
   	cout  << endl;

   	sirala (x, 5);

   	printf("Sonra: ");
   	for(i=0; i<5; i++) 
      	cout << "   " << x[i];
	cout  << endl;
   return 0;
}

void sirala (int *a, int n)
{
  	int k, j, gecici;

   	for(k=0; k<n-1; k++)
   		for(j=0; j<n-1; j++)
      		if( a[j]>a[j+1] ){
         		gecici = a[j];
           		a[j] = a[j+1];
         		a[j+1] = gecici;
      		}
}
