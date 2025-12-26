/*
	using variables in classes ......
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
		MyClass(){
			cout << "Yilmaz Ismail Cemsit";
		}
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
	
	return 0;	
}
