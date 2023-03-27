#include <stdio.h>

int fat(int n){

   if (n == 0)
      return 1;

   if (n > 0)
      return n * fat(n-1);

   return 0;
}

int pot(int p, int n){
   if (n == 0)
       return 1;

   if (n > 0)
       return p * pot(p, n-1);

   return 0;
}

int qtdeDig(int n){

  if (n < 10)
      return 1;

  return 1 + qtdeDig(n/10);
}


void main(){

   printf("Fatorial de 5! = %d\n", fat(5));
   printf("Fatorial de 8! = %d\n", fat(8));

   printf("Potencia 2^5 = %d\n", pot(2,5));
   printf("Potencia 3^3 = %d\n", pot(3,3));

   printf("# digitos 25436 = %d\n", qtdeDig(25436));

}