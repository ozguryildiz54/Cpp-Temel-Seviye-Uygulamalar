/* 	14prg04.c++: Dinamik Matris Çarpýmý.
	   	Bu program A(mxn) matrisi ile B(pxq) matrisini çarpýmýný hesaplar.
   		Çarpým matrisi C(mxq), C = AB dir. Çarpýmýn sonucu matris_carp()
   		fonksiyonu ile hesaplanýr.
   Örnek:
   ~~~~~~
       [ 1 0 2 ]     [ 3 1 ]               [ 1 0 2 ] [ 3 1 ]   [ 5 1 ]
   A = [-1 3 1 ]  B =[ 2 1 ]  ==> C = AB = [-1 3 1 ] [ 2 1 ] = [ 4 2 ]
                     [ 1 0 ]                         [ 1 0 ]
*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

double **matris_carp (double **, int, int,
                     double **, int, int);

int main()
{
   	double **A;
   	double **B;
   	double **C;
   	int i, j;

//		A matrisi için bellekten yer ayýrma */
   	A = (double **) calloc (2, sizeof (double));
   	for (i=0; i<2; i++)
      A[i] = (double *) calloc (3, sizeof (double));

// 		B matrisi için bellekten yer ayýrma
   	B = (double **) calloc (3, sizeof (double));
   	for(i = 0; i < 3; i++)
      	B[i] = (double *) calloc (2, sizeof (double));
      
// 		A matrisinin elemanlarý
   	A[0][0] = 1.0; A[0][1] = 0.0; A[0][2] = 2.0; 
   	A[1][0] =-1.0; A[1][1] = 3.0; A[1][2] = 1.0;

//		B matrisinin elemanlarý
   	B[0][0] = 3.0; B[0][1] = 1.0; 
   	B[1][0] = 2.0; B[1][1] = 1.0; 
   	B[2][0] = 1.0; B[2][1] = 0.0; 

//		 C = AB matrisi
   	C = matris_carp(A,2,3, B,3,2);

   for (i=0; i<2; i++){
      	for (j=0; j<2; j++)
         	cout << "  " << C[i][j];
      	cout << endl;
   }

  	return 0;
}

double **matris_carp (double **a, int m, int n, 
                     double **b, int p, int q)
{
   	int i, j, k;
   	double **c, t;

//		matrisler çarpýlabilir mi ?
   	if(n != p){
     	puts ("matrisler carpim icin uygun deðil!");
    return NULL;
   }

// 		carpim matrisi icin bellekten yer tahsis etme
   	c = (double **) calloc ( m, sizeof (double));

   	for(i = 0; i < m; i++)
      	c[i] = (double *) calloc (q, sizeof (double));

   	for (i=0; i<m; i++){
      	for (j=0; j<q; j++){
         	for (t=0.0, k=0; k<n; k++)
            	t += a[i][k] * b[k][j];
         		c[i][j] = t;
      	}
   	}
   return c;
}
