/*
	A class contruction ......
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

const float PI=3.14;
/*
	Bir küre sýnýfý...
*/
class Kure
{
	public:
		float r;
		float x, y, z;
/*
	Kürenin hacmi..
*/
	float hacim()
	{
		return (r*r*r*4*PI/3);
	}
/*
	Kürenin alaný..
 */
	float alan()
	{
		return (r*r*4*PI);
	}
} KURE;

int main()
{
	KURE.r=1.0;
	KURE.x=2.0;
	KURE.y=3.0;
	KURE.z=4.0;
	cout << "\n Kure Bilgileri :\n";
	cout << setfill ('=') << setw(20) << "\n"
				<< "X Kenari = " << KURE.x << " cm" << "\n"
		        << "Y Kenari = " << KURE.y << " cm" << "\n"
		        << "Z Kenarý = " << KURE.z << " cm" << "\n"
		        << "R Kenarý = " << KURE.r << " cm" << "\n"
		        << "Hacim    = " << setprecision (4) << KURE.hacim() << " cm3" <<"\n"
		        << "Alan     = " << KURE.alan() << " cm2"
		        
		        << "\n";
	return 0;
}
