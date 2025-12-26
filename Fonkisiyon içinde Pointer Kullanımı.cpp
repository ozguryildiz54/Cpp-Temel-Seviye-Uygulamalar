#include<stdio.h>

void yerDegistir(int *x, int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}

int main()
{
	int a,b;
	int *k=6;
	printf("2 tam sayi gir.\n");
	scanf("%d%d",&a,&b);
	yerDegistir(&a,&b);
	printf("\nDegismis degerler:%d %d k:%p",a,b,*k);
}
