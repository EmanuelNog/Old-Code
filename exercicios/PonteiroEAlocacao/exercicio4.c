#include <stdio.h>
#include <stdlib.h>


void main(){

    void *x;
    void *y;
    char tipo;

    printf("informe o tipo:\n f - float \n i - int \n");
    scanf("%c",&tipo);

    if (tipo == 'i')
    {
        x = malloc(sizeof(int));
        y = malloc(sizeof(int));

        printf("informe o primeiro numero\n");
        scanf("%i",x);
        printf("informe o segundo numero\n");
        scanf("%i",y);

        *(int*)x += *(int*)y;

       printf("resultado: %d", *(int*)x);
    }else if (tipo == 'f')
    {
        x = malloc(sizeof(float));
        y = malloc(sizeof(float));

        printf("informe o primeiro numero\n");
        scanf("%f",x);
        printf("informe o segundo numero\n");
        scanf("%f",y);

        *(float*)x += *(float*)y;

       printf("resultado: %f", *(float*)x);
    }
}
