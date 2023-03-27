#include <stdio.h>
#include <stdlib.h>

int determineNumPerfeito(int valor){

    int somaNum=0;
    int i;

    for(i=1;i<valor;i++){
        if (valor % i == 0){
            somaNum += i;
        }
    }

    if(somaNum == valor){
     printf("perfeito\n");
    }else
    printf("nao perfeito\n");
}

void main(){

    int *valor;

    valor = (int *) malloc (sizeof(int));

    scanf("%d",&valor);

    determineNumPerfeito(valor);
}
