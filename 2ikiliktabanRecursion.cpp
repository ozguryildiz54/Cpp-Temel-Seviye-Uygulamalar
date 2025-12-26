#include <stdio.h>
#include <conio.h>
void ikilik(int);

int main()
{
int sayi;
printf("Bir Sayi Giriniz:");
scanf("%d",&sayi);    
ikilik(sayi);
getch();
return 0;    
}
       void ikilik(int s)
       {
          if(s>0)
          {
          ikilik(s/2);
          printf("%d",s%2); 
          }  
             
       }
