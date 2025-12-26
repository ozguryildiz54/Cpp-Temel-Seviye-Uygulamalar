#include <stdio.h>
#include <conio.h>
int yildiz(int);
int main()
{
int satir; 
printf("Kac Satir Yildiz :");
scanf("%d",&satir);
yildiz(satir);
getch();
return 0;    
}

       int yildiz(int sat)
       {
       int a;
       if(sat==0)
       return -1;     
       
       for(int i=0;i<sat;i++)
       printf("*");
       
       printf("\n");
       
       a=yildiz(sat-1);
       
       for(int i=0;i<sat;i++)
       printf("*");
       
       printf("\n");
       return 0;
       }
