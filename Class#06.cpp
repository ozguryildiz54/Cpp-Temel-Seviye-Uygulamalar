/*
	A class contruction ......
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

class MyClass{
	private:
		int x;
	public:
		void fonk1 (int no);
		int fonk2 ();
};

void MyClass :: fonk1 (int no){
	x=no;
}
int MyClass :: fonk2 (){
	return x;
}

int main ()
{
	MyClass object1;
	MyClass object2;

	return 0;
}
