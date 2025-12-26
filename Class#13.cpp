#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>
#include <cstring>

using namespace std;

class MyCard
{
	private:
        char kitap_adi [80];
        char yazari [40];
        int adet;
        
    public:
        void store (char *t, char *name, int adet);
        void show ();
};
void MyCard :: store (char *t, char *name, int sayi_adet)
{
    strcpy (kitap_adi, t);
    strcpy (yazari, name);
    sayi_adet=adet;
}
void MyCard :: show()
{
    cout << "\nKitap Adi    : " << kitap_adi << endl;
    cout << "Yazari       : " << yazari << endl;
    cout << "Kalan Miktar : " << adet << endl;
}

int main()
{
    MyCard book1, book2, book3;
    book1.store ("Ucurtma Avcisi", "Micheal Mac Blue", 3);
    book2.store ("Son Veda", "Aylin Ezgin", 2);
    book3.store ("Gitme", "Nihal Avci", 4);

    book1.show();
    book2.show();
    book3.show();
    return 0;
}
