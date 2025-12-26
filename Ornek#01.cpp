/*
	Function overloading in C++ ....
	Here, FUNCTION overloaded using different type of 
	arguments...
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;
 
class MyClass 
{
   public:
      void function (int i){
    	cout << " int tipinde       : " << i << endl;
      }

      void function (double f){
        cout << " float tipinde     : " << f << endl;
      }

      void function (char *c){
        cout << " character tipinde : " << c << endl;
      }
};

int main (void)
{
   	MyClass object;
 
   	object.function(5);                // Call function to printer type of integer data
    object.function (16537.268);       // Call function to print type of float data
    object.function ("Merhaba C++");   // Call function to print type of character data
 
   return 0;
}
