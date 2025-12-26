/*
    10prg08.c++: iki matrisin toplamý hesabý.
 */
#include <iostream>
#include<iomanip>
#include <cmath>
#define SATIR 2
#define SUTUN 3
using namespace std;

int main()
{
    int a [SATIR][SUTUN] = {5, 3, 7,  0, 1, 2};
    int b [SATIR][SUTUN] = {1, 2, 3,  4, 5, 6};
    int c [SATIR][SUTUN];
    int i, j;

    puts ("A Matrisi:");
    for (i=0; i<SATIR; i++){
            for (j=0; j<SUTUN; j++)
                cout << setw(4) << a[i][j];
	cout << "\n";
    }

    puts ("\nB Matrisi:");
    for (i=0; i<SATIR; i++){
            for (j=0; j<SUTUN; j++)
                cout << setw(4) << b[i][j];
    cout << "\n";
    }

    puts ("\nC Matrisi:");
    for (i=0; i<SATIR; i++)
    {
        for(j=0; j<SUTUN; j++)
        {
            c [i][j] = a[i][j] + b[i][j];
            cout << setw(4) << c[i][j];
        }
    cout << "\n";
    }

  return 0;
}

