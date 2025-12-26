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
	public:
		int x;
		void fonk1 (int no);
		int fonk2 ();
}object1, object2;

void MyClass :: fonk1 (int no){
	x=no*no;
}
int MyClass :: fonk2 (){
	return pow(x,2);
}

using namespace std;

int main ()
{
	object1.fonk1 (5); // yerine object1.x=5; diyemeyiz çünkü x (private) korumalýdegildir.
	object2.fonk1 (20);
	cout << " 5 icin fonksiyonun degeri : " << setw(3) << object1.x << endl; // yerine nesne1.x=5; diyemeyiz çünkü x (private) korumalý degildir.
	cout << "20 icin fonksiyonun degeri : " << setw(3) << object2.fonk2 ();	
	return 0;
}
