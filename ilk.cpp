/* 
	10prg08.c++:  Bir fonksiyonun 'adresini' öðrenme. 
*/
#include <iostream>
#include <iomanip>

using namespace std;

int f(int n)
{
	int f=20, i;
 // 	for(i=1; i<n; i++)
 //   	f=f*i;
  	return f;
}

int main()
{
  	int (*pf)(int);
  	pf = &f;

  	printf("Fonksiyonun adresi = %p\n", &f);
  	printf("Fonksiyonun adresi = %p\n", pf);
	cout << "Fonksiyonun adresi = " << f(5) << endl;
	cout << "Fonksiyonun adresi = " << pf << endl;
  return 0;
}
