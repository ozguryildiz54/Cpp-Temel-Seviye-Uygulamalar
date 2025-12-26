#include<iostream>
using namespace std;

struct student
{
	char name[30];
	float score;
}a,*b;

int main()
{
//student a;
b=&a;
cin>>a.name	;
cin>>a.score;
cout<<"Name:"<<a.name<<endl;
cout<<"Score:"<<a.score<<endl;

cout<<(*b).name<<endl;
cin>>b->name;//(cin>>(*b).name;)
cin>>a.score;
cout<<(*b).name<<endl;
cout<<a.score<<endl;
 return 0;
}

