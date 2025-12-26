/*
	in a class, to define using variables into both public and private ......
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

class MyClass{
	private:
		string AdiSoyadi;
	public:
		void set_AdiSoyadi (string x){
			AdiSoyadi = x;
		}
		string get_AdiSoyadi (){
			return AdiSoyadi;
		}
};

int main ()
{
	MyClass object;
	object.set_AdiSoyadi ("Yilmaz Ismail Cemsit");
	cout << object.get_AdiSoyadi();
	
	return 0;	
}
