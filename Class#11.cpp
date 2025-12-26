/*
	A class contruction ......
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

	const float pi= 3.14;

class MyClass{	
	public:
		float x,y,z, r, hacim;
		float Hacim(){
			hacim=4.*pow (r, 3)/3.;
			return hacim;
		}
		float Alan(){
			return pi*r*r*4;
		}
}object;
		

int main ()
{
	object.r=1.0;
	object.x=2.0;
	object.y=3.0;
	object.z=4.0;  
	cout << "R : " << object.r << " cm" << endl;
	cout << "x : " << object.x << " cm" << endl;
	cout << "y : " << object.y << " cm" << endl;
	cout << "z : " << object.z << " cm" << endl;  
	cout << "Kurenin Hacmi : " << setprecision (5) << object.Hacim () << " cm3" << endl;
	cout << "Kurenin Alani : " << setprecision (5) << object.Alan () << " cm2" << endl;
	
	return 0;
}
