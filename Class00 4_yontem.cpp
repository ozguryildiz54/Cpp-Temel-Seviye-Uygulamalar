#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>
#include "MyClass.h"

using namespace std;


int main ()
{
	MyClass object1 ("    Muhendislik Fakultesi \n");
	cout <<object1.get_Name();
	
	MyClass object2 ("Bilgisayar Muhendisligi Bolumu");
	cout <<object2.get_Name();
	return 0;	
}
