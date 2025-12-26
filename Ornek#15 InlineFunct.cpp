/*
	example of an in-line function ...
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>

using namespace std;

inline int even (int x){
	return !(x%2);	
}

int main ()
{
	if (even (10))			// even cift demek ...
		cout << "10 sayisi bir cift sayidir.\n";
		if (even(11))
			cout << "11 sayisi bir tek sayidir.\n";
	
	return 0;
}
