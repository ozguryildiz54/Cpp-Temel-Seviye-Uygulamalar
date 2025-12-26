#include <iostream>
using namespace std;

void tersYaz(char *p,int boyut)
{
   if(boyut==0)
      return;
      
   cout<<p[boyut-1];
   tersYaz(p,boyut-1);
}

int main()
{

tersYaz("Merhaba",7);

cout<<endl;
system("pause");
}
