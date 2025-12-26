#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
int main(int argc, char *argv[]) {
system("color 4e");
setlocale(LC_ALL,"turkish");
char x,y;
printf("karakter giriniz...");
scanf("%c",&x);
//isalnum fonk numarik veya alfabetik deðerleri bulur
if(isalnum(x))
if(isalpha(x)==0)
/*isalpha fonk alfabetik deðilse 0 döndürür
tam tersiylede yapabilirdim yani 1 deðeri döndürürse alfabetiktir 
diyebilirdim ama artistlik olsun diye böyle yaptým
*/
printf("\nnumarik bir karakter girdiniz...\n");
else
printf("\nalfabetik bir karakter girdiniz...\n");
else if(isspace(x))//isspace adýnda belli zaten açýklama yapýyorum
printf("boþluk karakteri girdiniz");
else
printf("\nalfabetik , numarik veya boþluk karakteri girmediniz...\n");
/*
isdigit fonk var birde numarik deðerleri buluyor ama yukarýda gerek
kalmadan hallettim lazým olursa size kullaným ayný...
*/
system("pause");
/*not:Bazý arkadaþlarýmýz 'þ' gibi ingilizce harfler girip program yanlýþ çalýþýyor diyor lütfen saçmalamayýn
*/
return 0;
}
