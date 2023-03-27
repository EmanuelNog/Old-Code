#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"
#include "Fila.h"
//#include "Pilha.h"

void main(){

    pDFila NovaFila = criarFila();

    enfileirarInfo(NovaFila, alocaInt(4));
    enfileirarInfo(NovaFila, alocaInt(5));
    enfileirarInfo(NovaFila, alocaInt(2));
    enfileirarInfo(NovaFila, alocaInt(25));

    

    pDLista ListaRetorno = NGE(NovaFila, comparaInt);

    imprimrListaDeLista(ListaRetorno,imprimeInt);

}
