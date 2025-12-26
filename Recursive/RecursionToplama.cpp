#include <iostream>
using namespace std;
int topla(int);
int main()
{
    int n;
    cout<<"1+2+3+...+n\n";
    cout<<"n degerini giriniz:";
    cin>>n;
    cout<<"Sonuc:"<<topla(n);

cout<<endl;
system("pause");    
}

   int topla(int nn)
   {
     if(nn==1)
     return 1;
     else
     return (nn+topla(nn-1));    
   }
