#include <stdio.h>

void main(){

 /* todo endereco de memoria (ponteiro) usa sempre 4 bytes para ser armazenado */
 void *p;

 p = malloc(sizeof(int));
 *((int*)p) = 5;

 p = malloc(sizeof(float));
 *((float*)p) = 3.14;
 
 printf("%f", *((float*)p));
 free((float*)p);



 }