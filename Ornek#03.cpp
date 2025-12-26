/*
	Constructors functions ......
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

class MyClass {
	private:
		double uzunluk;
    public:
    	void set_uzunluk (double boyut);
      	double get_uzunluk (void);
      	MyClass ();                  // This is the constructor
};
 
MyClass :: MyClass (void){    // Member functions definitions
					         // including constructor
	
    	cout << "\n\tNesne (Object) yaratiliyor ......" << endl;
	}
 
	void MyClass :: set_uzunluk (double boyut){
    	uzunluk = boyut;
	}
 
	double MyClass :: get_uzunluk (void){
    	return uzunluk;
	}

int main( )                               // main function for the program
{
	MyClass object;
    object.set_uzunluk (6.0);             // MyClass uzunluk degeri ataniyor....
   	cout << "\n\tCizgi uzunlugu : " << object.get_uzunluk() << " m dir." << endl;
 
   return 0;
}
