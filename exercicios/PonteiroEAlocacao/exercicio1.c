#include <stdio.h>

void main(){

 void *a;
 void *b;
 void *c;

 a = malloc(sizeof(int));
 b = malloc(sizeof(int));
 c = malloc(sizeof(int));

 *((int*)a) = 1;
 *((int*)b) = 1;


 *((int*)c) = *((int*)a) + *((int*)b);

printf("%d", *((int*)c));
free((int*)a);
free((int*)b);
free((int*)c);
}
