#include <stdio.h>
/* o que � ponteiro? */
/* � uma vari�vel que armazena um endereco de memoria*/

void main(){

/* como declarar um ponteiro */
 int *p;

 /* alocar mem�ria */
 /* como fazer para o ponteiro apontar para um endereco? */
 p = (int *) malloc(sizeof(int));

 /* como atribuir um valor usando o ponteiro? */
 *p = 5;

 /* como usar o conteudo apontado pelo ponteiro? */
 printf("%d", *p);


 }