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
}object1, object2;

void MyClass :: fonk1 (int no){
	x=no;
}

int MyClass :: fonk2 (){
	return x;
}

using namespace std;

int main ()
{
	object1.fonk1 (5); // yerine nesne1.x=5; diyemeyiz çünkü x (private) korumalýdýr.
	object2.fonk1 (20);
	cout << object1.fonk2 () << endl; // yerine nesne1.x=5; diyemeyiz çünkü x (private) korumalýdýr.
	cout << object2.fonk2 ();	
	return 0;
}
