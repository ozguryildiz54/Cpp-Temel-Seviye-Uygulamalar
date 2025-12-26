
#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

void merge(int [],int,int,int);
void part(int [],int,int);
int main()
{
    int arr[8]={12,34,53,23,2,18,7,9};
    int i,size;
    cout<<"\n\t---MERGE SORTING METHOD---\n\n";
    
    part(arr,0,7);
    cout<<"\n\t---MERGE SORTED ELEMENTS---\n\n";
    for(i=0;i<8;i++)
       cout<<arr[i]<<",";

getch();
return 0;    
}


 void part(int arr[],int min,int max)
 {
    int mid;
    if(min<max)
    {
       mid=(min+max)/2;
       part(arr,min,mid);
       part(arr,mid+1,max);
       merge(arr,min,mid,max);
    }
 }
 
 void merge(int arr[],int min,int mid,int max)
 {
    int tmp[8];
    int i,j,k,m;
    j=min;
    m=mid+1;
    for(i=min;j<=mid && m<=max;i++)
    {
        if(arr[j]<=arr[m])
        {
           tmp[i]=arr[j];
           j++;
        }
        else
        {
           tmp[i]=arr[m];
           m++;
        }
    }   
        
        if(j>mid)
        {
            for(k=m; k<=max; k++)
            {
                tmp[i]=arr[k];
                i++;
            }
         cout<<tmp[i]<<"\t";
         }
         else
         {
             for(k=j; k<=mid; k++)
             {
                 tmp[i]=arr[k];
                 i++;
             }
         }
         
    for(k=min; k<=max; k++)
     arr[k]=tmp[k];
 }
