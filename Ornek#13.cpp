/*
	public ile kalitim yapma ....
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;
 
class MyClass{
	private:
		int x;
	public:
		int show (){
			return x=25;
		}
};
// private ile kalitim ....

class turet : private MyClass{
	private:
		int y;
	public:
		int show_turet (){
			return y=56;
		}
		int fonk(){
			int z=show();
			return z;
		}	
}object;
int main ()
{
	cout << "Temel sinif degeri      : " << object.fonk() << endl;
	cout << "Turetilmis sinif degeri : " << object.show_turet() << endl;
	 
  return 0;
}
