void* maiorElemento(pDLista lista, void* maiorAtual, FuncaoComparacao fc){
    pNoh NohAuxiliar = malloc(sizeof(Noh));
    NohAuxiliar = lista->primeiro;

    while(NohAuxiliar != NULL){
        if(fc( NohAuxiliar->info, maiorAtual)<0){
            maiorAtual = NohAuxiliar->info;
            return maiorElemento(lista,maiorAtual, fc);
        }
        NohAuxiliar = NohAuxiliar->prox;
    }    

    return maiorAtual;
}