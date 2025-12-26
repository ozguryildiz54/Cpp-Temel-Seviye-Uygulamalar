#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
double fonksiyon(double sayi){

	return sayi*sayi - 11;

}
int main(int argc, _TCHAR* argv[])
{
	double tol = 1e-4;
	double ea = 1.0;
	double xL = 3.0;
	double xU = 4.0;
	double xR = (xL + xU) / 2;
	double xRnew;
	
	if (fonksiyon(xL)*fonksiyon(xU) > 0) {
		cout << "Kok Yoktur. \n";
	}
	else {
		int i = 1;
		while (tol < ea){
			if (fonksiyon(xL)*fonksiyon(xR) > 0) 
				xL = xR;
			else xU = xR;

				xRnew = (xL + xU) / 2;
				ea = fabs((xRnew - xR) / xRnew) * 100;
				xR = xRnew;
				cout << i<< " . iterde ea="  << ea << endl;
				i++;
			
		}
		cout <<"Kok= \t" <<xR <<endl;
	}

	getchar();
	getchar();

	return 0;
}
