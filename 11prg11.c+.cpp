/* 
    11prg11.c++:  void gosterici (generic pointer) uygulamasi 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

int main()
{
  	char kar = 'a';
  	int tam = 66;
  	double ger = 1.2;
  	void *veri;

  	veri = &kar;
  	cout << "veri -> karakter: veri " << *(char *) veri <<" karakter degerini gosteriyor.\n" << endl ;

  	veri = &tam;
    cout << "veri -> tamsayi: simdi veri " << *(int *) veri << " tamsayi degerini gosteriyor.\n"<< endl;

  	veri = &ger;
  	cout << "veri -> gercel sayi: simdi de veri " << *(double *) veri << " gercel sayi degerini gosteriyor.\n"<< endl;

  return 0;
}
