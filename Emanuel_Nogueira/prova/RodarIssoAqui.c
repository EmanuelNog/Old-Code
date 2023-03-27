#include <stdio.h>
#include "Utils.h"
#include "Lista.h"

int MOD(int x, int y){
    int resultado = 0;

    if (x < y) {
        return x;

    } else {
        resultado = MOD(x - y, y);
    }
    return resultado;  
}

int main(){
    
    printf("questao 1)\n");
    printf("mod 5 e 3\n");
    printf("%d\n",MOD(5,3));
    printf("mod 19 e 4\n");
    printf("%d\n",MOD(19,4));
    
    printf("\n----------------\n");

    printf("questao 2)\n");
    pDLista Lista = criarLista();

    incluirInfo(Lista, alocaInt(1));
    incluirInfo(Lista, alocaInt(2));
    incluirInfo(Lista, alocaInt(3));
    incluirInfo(Lista, alocaInt(4));
    incluirInfo(Lista, alocaInt(5));
    incluirInfo(Lista, alocaInt(6));

    printf("Lista orignial\n");
    imprimirLista(Lista, imprimeInt);
    printf("\n");
    printf("Lista gerada\n");
    imprimirLista(split(Lista, benditoPredicado), imprimeInt);
    
    printf("\n----------------\n");

    printf("questao 3)\n");
    pDLista lista_de_impressao = decomporNumero(352);
    imprimirLista(lista_de_impressao,imprimeArrayDe3Int);
    
    printf("\n----------------\n");

    printf("questao 4)\n");
    printf("maior valor da lista da questao 2\n");
    int* maiorAtual = (int *)Lista->primeiro->info;
    imprimeInt(maiorElemento(Lista, maiorAtual, comparaInt));

}