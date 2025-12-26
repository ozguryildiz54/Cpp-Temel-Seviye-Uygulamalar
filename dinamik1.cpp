#include <stdio.h>
#include <stdlib.h>

int main(){

  int n,i;
  float *x, toplam, ort;

  while(1)
  {
        /* dizinin eleman sayýsý okunuyor */
        printf("\nEleman sayýsýný girin: ");
        scanf("%d",&n);

        /* eleman sayýsý <= 0 ise dögüden çýk */
        if( n<=0 )
          break;

        /* bellekten yer isteniyor */
        x = (float *)  malloc( sizeof(float)*n );

       /* istenen yer ayrýldý mý? */
       if( x == NULL ){
         puts("Yetersiz bellek alaný");
         exit(1);
       }

       /* elemanlar tek tek belleðe yazýlýp toplamlarý hesaplanýyor */
       for(toplam =0.0, i=0; i<n; i++){
          printf("%d. eleman: ",i+1);
          scanf("%f",&x[i]);
          toplam += x[i];
       }

       ort = toplam / n;

       printf("Ortalama = %f\n",ort);

       /* ayrýlan alan boþaltýlýyor */
       free(x);
  }

 return 0;
}
