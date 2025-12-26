#include <iostream>
using namespace std;
void recursiveDogrusal(int[],int,int);
int main()
{
    int boyut,aranan;
    
    cout<<"Dizinin Boyutunu giriniz:";
    cin>>boyut;
    int dizi[boyut];
    
    //dizinin elemanlari alinir.
    for(int i=0;i<boyut;i++)
    {
    cout<<i<<".indis==";
    cin>>dizi[i];        
    }    
    
    for(int i=0;i<boyut;i++)
    cout<<dizi[i]<<",";
    
    cout<<"Aranan elemani giriniz:";
    cin>>aranan;
    
    recursiveDogrusal(dizi,(boyut-1),aranan);
    
    
cout<<endl;
system("pause");    
}

     void recursiveDogrusal(int d[],int boy,int ara)
     {
     
        if(boy>=0)
          {
                if(d[boy]==ara)
                   {
                   cout<<"arananin indis:"<<boy;
                   }
                else
                   {  
                   boy--;
                   recursiveDogrusal(d,boy,ara);
                   }
          }
          
     
         
     }
