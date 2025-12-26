/*
	14prg03.c++: Bir dizinin kare kökünü hesaplayan fonksiyon
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

	double *kare_kok (double *, int);

int main()
{
   	double  A[5] = {1.0, 2.0, 4.0, 8.0, 16.0};
   	double *B;
   	int i;

   	cout << "A dizisi : ";
   	for (i=0; i<5; i++)
    	cout << setw(10) << A[i];
   	cout << endl;

   	B = kare_kok (A, 5);

   	cout << "B dizisi : ";
   	for (i=0; i<5; i++)
    	cout << setw(10) << B[i];
   	cout << endl;

  	return 0;
}

/* Bir dizinin bütün elemanlarýnýn karekökünü gönderir */
double *kare_kok (double *dizi, int boyut)
{
   	int i;
   	static double *c;

   /* static bellekten yer tahsis etme */
	c = (double *) calloc ( boyut, sizeof (double));
	if (c==NULL) 
		return NULL;
   	for (i=0; i<boyut; i++)
       	c[i] = sqrt (dizi[i]);
   return c;
}
