/*
	A basic class contruction ......
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

class MyClass{

	private:
		string name;
	
	public:
		MyClass(string z){
			set_Name(z);
		}
		void set_Name (string x){
			name = x;
		}
		string get_Name (){
			return name;
		}
};

int main ()
{
	MyClass object ("Sansli Bucky Billy");
	cout <<object.get_Name();
	
	return 0;	
}
