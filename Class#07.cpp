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
	object1.fonk1 (5);
	object2.fonk1 (20);
	cout << object1.fonk2 () << endl;
	cout << object2.fonk2 ();	
	return 0;
}
/*
	Class MyClass{
		private :
			fonksiyonlar ve deðiþkenler	

		public :	
			fonksiyonlar ve deðiþkenler
			
		}nesneler;
*/
