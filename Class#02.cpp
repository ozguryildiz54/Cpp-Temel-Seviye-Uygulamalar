/*
	A class contruction ......
	to write on screen into the main program....
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

class MyClass
{
	public:
		string ekran_yaz;		
};

main ()
{
	MyClass object;
	object.ekran_yaz = "Mrhba Bilgisayar Bolumu ogrencileri ! .....";	
	cout << object.ekran_yaz << endl;
	
	return 0;	
}
