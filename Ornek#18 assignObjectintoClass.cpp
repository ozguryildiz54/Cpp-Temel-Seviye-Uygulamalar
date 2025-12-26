/*
	an example of object assignment... 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

class MyClass{
	private:
		int a, b;
	public:
		void set (int i, int j){
			a=i;
			b=j;
		}
		void show(){
			cout << "a = " << a << "    " << "b = " << b <<"\n";
		}
};

int main ()
{
	MyClass object1;
	MyClass object2;
	object1.set (10, 4);
/*
	assign object1 to object2 ....
*/
	object2=object1;
	object1.show();
	object2.show();
			
	return 0;
}
