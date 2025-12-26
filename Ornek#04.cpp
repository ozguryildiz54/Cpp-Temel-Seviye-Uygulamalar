/*
	Contructor Functions ......
	one class, two objects ....
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

class Dikdortgen {
    private:
    	int en, boy;
  	public:
    	void set_deger (int, int);
    	int alan(){
			return en*boy;
		}
};

void Dikdortgen :: set_deger (int e, int b) {
  	en = e;
 	boy = b;
}

int main (){
  	Dikdortgen object;
  	object.set_deger (3, 4);
  	cout << "Alan : " << object.alan() << " cm2 dir.";
  
  return 0;
}
