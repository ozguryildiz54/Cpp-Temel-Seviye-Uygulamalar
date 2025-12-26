#include <stdio.h>
#include <conio.h>

int fibo(int say);

int main(){
    int sayi;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    printf("Sonuc: %d",fibo(sayi));
    getch();
    return (0); 
     }
  
  int fibo(int n){
  if(n==0) 
  return 0;
  if(n==1)
  return 1;
  
 return (fibo(n-1)+fibo(n-2));
 }
