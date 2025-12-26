/*
	an example of object assignment...
	Returning object from function. 
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

//Returning an object
// ...
class samp{
	private:
		char s[80];
	public:
		void show ( ){
			cout << s << "\n";
		}
		void set (char *str){
			strcpy (s, str);
		}
};

//Return an object of type samp
// ....
	samp input( ){
		char s[80];
		samp str;
		cout << "Enter a string: ";
		cin >> s;
		str.set(s);
		return str;
	}

int main( )
{
	samp object;

//assign returned object to object
	object = input( );
	object.show( );
	
	return 0;
}
