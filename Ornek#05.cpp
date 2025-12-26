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
    int en, boy;
  public:
    Dikdortgen (int, int);
    int alan (){
	return (en * boy);
	}
};

Dikdortgen :: Dikdortgen (int e, int b){    // constructor....
  	en = e;
  	boy = b;
}

int main ()
{
	Dikdortgen object (3, 4);
  	cout << "Alan  : " << object.alan() << " cm2 dir." << endl;
  
  return 0;
}
