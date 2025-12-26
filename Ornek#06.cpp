/*
	// example: class constructor .....	
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;
 
class Dikdortgen{
  private:  
	int en, boy;
  public:
    Dikdortgen (int, int);
    int alan (){
	return (en * boy);
	}
};

Dikdortgen :: Dikdortgen (int e, int b)
{
  	en = e;
  	boy = b;
}

int main ()
{
	Dikdortgen object1 (3,	4);
	Dikdortgen object2 (5,	6);
	Dikdortgen object3 (10,	20);
	Dikdortgen object4 (50,	100);
  	cout << "\n  Alan  : " << object1.alan() << " cm2 dir." << endl;
  	cout << endl;
  	cout << "\n  Alan  : " << object2.alan() << " cm2 dir." << endl;
  	cout << endl;
  	cout << "\n  Alan  : " << object3.alan() << " cm2 dir." << endl;
  	cout << endl;
  	cout << "\n  Alan  : " << object4.alan() << " cm2 dir." << endl;
  
  return 0;
}
