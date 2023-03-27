#include <stdio.h>
#include "Utils.h"
#include "Lista.h"

int main(){
    pDLista pListaInt = criarLista();
    /* teste de inclusao */
    //incluirInfo(pListaInt, alocaInt(5));
    incluirInfoComeco(pListaInt, alocaInt(10));
    incluirInfoComeco(pListaInt, alocaInt(20));
    incluirInfoComeco(pListaInt, alocaInt(30));
    //incluirInfoMeio(pListaInt, alocaInt(21), 2);

    printf("\nResultado da inclusao \n");
    imprimirLista(pListaInt, imprimeInt);

    int r;
    r = contemInfo(pListaInt, alocaInt(21), &comparaInt);
    if (r==0)
        printf("\n Informacao NAO estah na lista!");
    else
        printf("\n Informacao estah na lista!, na posicao: %d", r);
}
