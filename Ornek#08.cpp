/*
	member initialization :
	When a constructor is used to initialize other members,
	these other members can be initialized directly, without
	resorting to statements in its body. This is done by inserting,
	before the constructor's body, a colon (:) and a list of 
	initializations for class members. 
	For example, consider a class with the following declaration:

class Daire {
	private:
		int en, boy;
 	public:
    	int yaricap, alan;
		Daire (int, int);
    	int Alan(){
			alan = yaricap*yaricap*pi;
			return alan;
		}
};
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

const float pi=3.14159265;

class Daire{
	private:
		double yaricap, alan;
  	public:
    	Daire (double r) : yaricap(r){}
    	double Alan(){
    		alan = pow (yaricap, 2)*pi;
    		return alan;
		}
};

class Silindir{
	private:
		Daire BASE;
    	double yukseklik, hacim;
  	public:
  		Silindir(double r, double h) : BASE (r), yukseklik(h) {}
    	double Hacim(){
    		hacim = BASE.Alan() * yukseklik;
			return hacim;
		}
};

int main ()
{
	Daire object1 (1);
	cout << "\n\tAlan  : " << setprecision (3) << object1.Alan () << " m2 dir. \n";
	
	Silindir object2 (1, 2);
  	cout << "\n\tHacim : " << setprecision (3) << object2.Hacim() << " m3 dir. \n";

  return 0;
}
