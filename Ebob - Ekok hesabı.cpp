#include <iostream>
using namespace std;

class ebobEkok
{
	public:
	int en_buyuk (int sayi1, int sayi2)
	{
	
	if (sayi1 > sayi2)
	return sayi1;
	else
	return sayi2;
	}
}nesne;


int main()
{
 bas:
int sayi1,sayi2;
cout << "Sayi 1 = ";
cin >> sayi1;

cout << '\n' ;

cout << "Sayi 2 = ";
cin >> sayi2;

int sayi = nesne.en_buyuk(sayi1,sayi2);
int ebob=1;
for (int i = sayi ; i > 0 ; i-- )
{
if ((sayi1 % i) == 0 && (sayi2 % i) == 0 )
{
ebob = i;
break;
}
}
cout << "EBOB = " << ebob << endl;

int ekok = (sayi1 * sayi2) / ebob ; // matematikte bilindik bir kuraldir.

cout << "EKOK = " << ekok << endl;
goto bas;
return 0;
}
