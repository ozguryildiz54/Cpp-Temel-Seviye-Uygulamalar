#include <iostream>
using namespace std;
int main()
{
   int n;
   int birinci=0,ikinci=1,yeni;
   int sayac=0;
   cout<<"n.degeri giriniz:";
   cin>>n;
   cout << "Fibonacci Series: " << birinci << " , " << ikinci << " , ";
   
   for (int i = 0; i < n-2; ++i) {
        yeni = birinci + ikinci;
        cout << yeni << " , ";
        birinci = ikinci;
        ikinci = yeni;
    }
    /*yeni = birinci + ikinci;
    while(yeni<n)
    {
             yeni = birinci + ikinci;
        cout << yeni << " , ";
        birinci = ikinci;
        ikinci = yeni;             
    }*/
   
cout<<endl;
system("pause");    
}
