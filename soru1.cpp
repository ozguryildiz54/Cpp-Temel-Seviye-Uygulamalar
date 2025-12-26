#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	
int m[3][3]={{1,2,8},{6,5,7},{4,9,1}};

int str=3;
int stn=3;

int satir[3];
int sutun[3];


for(int i=0;i<str;i++)
{
	
	for(int j=0;j<stn;j++)
{
	
	  if(m[i][j]==1)
	  {
	  	
	  	satir[i]=1;
	  	sutun[j]=1;
	  	
	  }
}	
}


for(int i=0;i<str;i++)
{
	
	for(int j=0;j<stn;j++)
	{
		
		if(satir[i]==1 || sutun[j]==1)
		{
	  
	     m[i][j]=0;
	
		}
		 
		
	}
	
}


for(int e=0;e<str;e++)
{

  for(int l=0;l<stn;l++)
  
   cout<<m[e][l];

   cout<<"\n";
}

	
	
	
	getch();
	return 0;
	
}
