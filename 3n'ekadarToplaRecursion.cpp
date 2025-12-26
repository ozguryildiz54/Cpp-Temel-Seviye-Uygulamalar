#include <stdio.h>
#include <conio.h>
int topla(int);

int main()
{
int sayi;
printf("S=1+2+3+...+n\n");
printf("n'yi Giriniz :");
scanf("%d",&sayi);
printf("\nS = %d",topla(sayi));
getch();
return 0;    
}

       int topla(int s)
       {
       if(s==0)
       return 0;
       return (s+topla(s-1));    
       }
       
