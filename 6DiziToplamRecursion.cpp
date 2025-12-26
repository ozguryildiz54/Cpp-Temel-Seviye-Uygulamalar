#include <stdio.h>
#include <conio.h>
int topla(int[],int);
int main()
{
    int n,i;
printf("S=a[0]+a[1]+...+a[n-1]\n");    
printf("n degerini giriniz:");
scanf("%d",&n);
int d[n];
    for(i=0;i<=n;i++)
    {
    printf("%d.indis=",i);
    scanf("%d",&d[i]);                 
    }


printf("S=%d",topla(d,n));
getch();
return 0;    
}

       int topla(int dizi[],int nn)
       {        
       return (dizi[nn]+topla(dizi[nn-1],nn));
       }
