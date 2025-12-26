/*
	using variables in classes ......
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
		MyClass (string y){
			set_Name(y);
		}
		void set_Name (string x){
			name = x;
		}
		string get_Name (){
			return name;
		}
};
