#include<iostream>
#include <conio.h>
using namespace std;

void merge(int a[], int p, int q, int r)
{
    int b[8];
    int sb, index, yer;
    sb = q - 1;
    yer = p;
    index = r - p + 1;
    while ((p <= sb) && (q <= r))
    {
        if (a[p] <= a[q])
        {
            b[yer] = a[p];
            yer = yer + 1;
            p = p + 1;
        }
        else
        {
            b[yer] = a[q];
            yer = yer + 1;
            q = q + 1;
        }
    }
    while (p <= sb)
    {
        b[yer] = a[p];
        p = p + 1;
        yer = yer + 1;
    }
    while (q <= r)
    {
        b[yer] = a[q];
        q = q + 1;
        yer = yer + 1;
    }
    for (int i = 0; i < index; i++)
    {
        a[r] = b[r];
        r = r - 1;
    }
}

void mergesort(int a[], int p, int r)
{
    if (p<r)
    {
        int q=(p+r)/2;
        mergesort(a,p,q);
        mergesort(a,q+1,r);
        merge(a,p,q+1,r);
    }
}

int main()
{
    int a[]={30,60,100,44,43,22,40,33};
    int i;
    mergesort(a,0,7);
    for (i=0;i<8;i++)
        cout<<a[i]<<" ";
        
        getch();
    return 0;
}
