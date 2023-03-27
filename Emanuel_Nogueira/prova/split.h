pDLista split(pDLista pd, FuncaoPredicado fp){

    if(pd == NULL){
        printf("lista vazia");
        return 0;
    }

    pDLista listaSplit = criarLista();

    pNoh NohAuxiliar = malloc(sizeof(Noh));
    NohAuxiliar = pd->primeiro;

    while(NohAuxiliar != NULL){  
        if(fp( NohAuxiliar->info)==0){
            incluirInfo(listaSplit, NohAuxiliar->info);
            pd->quantidade = pd->quantidade - 1;
            listaSplit->quantidade = listaSplit->quantidade + 1;
        }
        NohAuxiliar = NohAuxiliar->prox;
    }

    return listaSplit;
}