void incluirInfoComeco(pDLista pd, void *info){

    if (pd==NULL){
        printf("o descritor esta vazio");
        return;
    };

    pNoh novoNoh = malloc(sizeof(Noh));

    novoNoh->info = info;
    novoNoh->prox = NULL;

    if(pd->primeiro != NULL){
        novoNoh->prox = pd->primeiro;
    }

    pd->primeiro = novoNoh;
    pd->quantidade++;
}