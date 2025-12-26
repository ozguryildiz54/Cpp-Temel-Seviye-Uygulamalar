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
		void set_x (int n){
			x=n;
		}
		void show_x (){
			cout << "\n  x : " << setw(2) << x << endl;
		}
};
// public ile kalitim ....

class turet : public MyClass{
	int y;
	public:
		void set_turet(int n){
			y=n;
		}
		void show_turet (){
			cout << "\n  y : " << setw(2) << y << endl;
		}	
};
int main ()
{
	turet object;
	
	object.set_x(23);
	object.set_turet(12);
	object.show_x();
	object.show_turet();
  
  return 0;
}
