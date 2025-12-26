#include <stdio.h>
#include <conio.h>
void ters(int);

int main()
{
int sayi;
printf("Bir Sayi giriniz:");
scanf("%d",&sayi);
ters(sayi);
getch();
return 0;    
}

       void ters(int s)
       {
       int birler;
           if(s>0)
           {
           birler=s%10;
           printf("%d",birler);
           s=s/10;     
           }
           
       ters(s);
       }
