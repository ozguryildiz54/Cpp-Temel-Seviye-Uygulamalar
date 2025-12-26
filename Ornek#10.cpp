/*
	Yas sýnýfýnýn özelliklerini kullanarak kalýtým (inheritance) yolu
	ile YasHesap adýnda yeni bir sýnýf türettildi...	
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

class Yas 		// Kalýtým olarak kullanýlacak sýnýf (BASE class)
{							// define base class ....
	protected:				// Dýþardan kullanýma KAPALI ...
    	int DOGUM_YIL; int MEVCUT_YIL;
	public: 				// Dýþardan kullanýma ACIK ....				
    	void DogumYili (int DgmYil){
        	DOGUM_YIL = DgmYil;
    	}
    	void MevcutYil (int MvctYil){
        	MEVCUT_YIL = MvctYil;
    	}
};

class YasHesap : public Yas          /*   define derived class
		Yas class ýn özelliklerini kullanarak kalýtým yolu
 		ile YasHesap adýnda yeni bir sýnýf türettildi.     */
{
public:
    int hesap()
    {
        return(MEVCUT_YIL - DOGUM_YIL);
    }
};

int main (void)
{
	YasHesap object;   //Sýnýftan object adýnda bir nesne oluþturuluyor...

    int gun, yil;

    cout << "\n Dogum tarihini giriniz    : ";
    cin >> gun;
    cout << "\n Bulundugumuz yili giriniz : ";
    cin >> yil;

    object.DogumYili (gun);    // Class içerisindeki fonksiyonlarý kullanýyorum
    object.MevcutYil (yil);
	cout << setfill('=') << setw(33) << "="  << endl;
    cout << "Yasiniz : " << object.hesap();
    
    return 0;
}
