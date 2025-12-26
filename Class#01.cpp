/*
	A basic class contruction ......
	to write on screen into the class....
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

class MyClass{
	public:
		void ekran_yaz()
		{
			cout << "Mrhba Bilgisayar Bolumu ogrencileri ! ....." << endl;
		}
};

int main ()
{
	MyClass object;
	object.ekran_yaz();
	
	return 0;	
}
