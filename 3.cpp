#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
int a[5];
for (int i=0;i<5;i++)
     {a[i]=i;}
     
     for(int i=0;i<5;i++)
     {
             cout <<"dizideki deger\n"<<  a[i]<<"onun adresi:"<<&a[i]<<"\n";
             }
   
     
    system("PAUSE");
    return EXIT_SUCCESS;
}

