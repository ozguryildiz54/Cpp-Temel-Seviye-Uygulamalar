#include <stdio.h>
#include <conio.h>
void basamak(int);
int main()
{
int sayi;
printf("Sayi giriniz:");
scanf("%d",&sayi);
basamak(sayi);
getch();
return 0;    
}

       void basamak(int s)
       {
       int t=0,k;
       printf("%d\t",s%10);
           if(s>10)
           basamak(s/10);     
       }
