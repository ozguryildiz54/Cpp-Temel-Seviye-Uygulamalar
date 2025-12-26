/*
	object pointer ...
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

class MyClass{
	private:
		int a;
	public:
		MyClass(int x);		// constructor..
		int get();
};

MyClass :: MyClass(int x){
	a=x;
}

int MyClass :: get(){
	return a;
}

int main ()
{
	MyClass object(120);	// create object ....
	MyClass *p;				// create pointer to object ...
	
	p=&object;				// put address of object into p...
	
	cout << "object icerigi  : " << object.get() << "\n";
	cout << "pointer icerigi : " << p->get();
	
	return 0;
}
