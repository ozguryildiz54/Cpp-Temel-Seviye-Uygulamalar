#include<iostream>
using namespace std;
class list
{
 int data; 
 list *next;
    
public:
 list(){};
 void ekle(int);
 void sil(int);
 void listele();
 int say();
};
list *head;        // bu listedeki tüm elemanlara eriþeceðimiz head pointer  tanýmlamasýdýr ve global olarak tanýmlamamýz gerekir.

void list::ekle(int sayi)
{
 list *newlist=new list;     // eklenecek nense için yer açýlýr.
 newlist->data=sayi;         // data ve next pointer lar atanýr.
 newlist->next=0;
 list *p=head;             // listede dolaþýcak bir pointer tanýmlanýr.
 if(p==0) 
  head=newlist;
 else
 {
  while(p->next!=0)
     p=p->next;
  p->next=newlist;    // en sona gelindiðinde eleman eklenmiþ olur.

 }
}

void list::sil(int x){
 list *p=head;
 list *temp=p;

 if(p==0)
  cout<<"listede eleman yok"<<endl;   

 else if(p->next==0 && p->data==x)    // bir tane eleman var ve onun silindiði yer.
 {
  delete p; head=0;                            
 }
 else if(p==head && p->data==x)       // birçok eleman var ve baþtakinin silindiði.
 {
  head=p->next;
  delete p;
 }
 else
 {   p=p->next;                      // diðer durumlarýn siindiði yer .
  while(p)
  {                       
   if(p->data==x) 
   {
          temp->next=p->next;
    break;
   }
      p=p->next;
      temp=temp->next;

  }
  if(p==0)
   cout<<"aradiginiz eleman yok."<<endl;
  else
  delete p;
 }
}

void list::listele()
{
 list *p=head;
 int i=1;
 if(p==0)
  cout<<"liste boss."<<endl;
 else      
 {
  while(p)        // NULL elemana kadar gidip ekrana yazdýrýlýyor.
  {
   cout<<i<<".deger: "<<p->data<<endl;
   p=p->next;
   i++;
  }                           
 }
}

int  list::say()
{
 int i=0;
 list *p=head;
 while(p)      // NULL elemena kadar gidip sayýyý geri döndürüyor.
 {
  p=p->next;
  i++;
 }
 return i;
}

int main()
{
 list a;
 char ch;
 int i;
   while(1)
 {
  cout<<"********************************"<<endl<<"Eklemek icin  ---->E"<<endl<<"Silmek icin ------>S"<<endl<<"Saymak icin ------>Y"<<endl<<"Listelemek icin -->L"<<endl
   <<"Cikis icin ------->C"<<endl<<"********************************"<<endl<<endl;
  cin>>ch;
  if (ch=='C')break;
  switch(ch)
  {
  case 'E':
   {
    cout<<"eklemek istediginiz veriyi giriniz."<<endl<<endl;
    cin>>i;
    a.ekle(i);
    break;
   }
  case 'S':
   {
   cout<<"silmek istediginiz veriyi giriniz."<<endl<<endl;
    cin>>i;
    a.sil(i);
    break;
   }
  case'Y':
   {
    cout<<"listedeki sayi: "<<a.say()<<endl<<endl;
    break;
   }
  case 'L':
   {
    a.listele();
    break;
   }
  case'P':
   break;
  default:
   {
    cout<<"lutfen menudeki secenekleri seciniz."<<endl<<endl;
   }
  }
  
 }
 system("PAUSE");
 return 0;
}

