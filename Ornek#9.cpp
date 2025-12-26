/*
	The Class Destructor:
	A destructor is a special member function of a class that is 
	executed whenever an object of it's class goes out of scope or 
	whenever the delete expression is applied to a pointer to the 
	object of that class.
	A destructor will have exact same name as the class prefixed
	with a tilde (~) and it can neither return a value nor can it
	take any parameters. Destructor can be very useful for releasing
	resources before coming out of the program like closing files,
	releasing memories etc.

	Following example explains the concept of destructor:
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;
 
class MyClass{							// class declaration ....
  	private:
  		double uzunluk;
	public:
   		void set_uzunluk (double len);
      	double get_uzunluk (void);
      	MyClass();                       // This is the constructor declaration...
      	~MyClass();                      // This is the destructor: declaration...
};
 
// Member functions definitions including constructor
//  ------------------------------------------------------->
MyClass :: MyClass (void)
{
   	cout << "\n\tObject yaratiliyor !..........." << endl;
}
//  ------------------------------------------------------->
MyClass :: ~MyClass(void)
{
    cout << "\n\tObject yok ediliyor !.........." << endl;
}
//  ------------------------------------------------------->
	void MyClass :: set_uzunluk(double len){
    	uzunluk = len;
	}
 
	double MyClass :: get_uzunluk(void){
    	return uzunluk;
	}

int main( )			// Main function for the program ....
{
   	MyClass object;
 	// set line length
//  ------------------------------------------------------->	
	object.set_uzunluk (6.0); 
   	cout << "\n\tUzunlugun boyunu metre cinsinden girilmistir ... " << endl;
   	cout << "\n\tUzunlugun boyutu : " << object.get_uzunluk() << " m dir." << endl;
 
   	return 0;
}
