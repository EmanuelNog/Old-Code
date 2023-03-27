void incluirInfo(pDLista pd, void *info){

    if (pd == NULL){
        printf("Lista nao existe ainda, nao eh possivel incluir!");
        return;
    }
    pNoh pNovo = malloc(sizeof(Noh));
    pNovo->info = info;
    pNovo->prox = NULL;

    pNoh auxUltimo  = pd->ultimo;
    pd->ultimo      = pNovo;
    pd->quantidade++;

    if (pd->primeiro == NULL)
        pd->primeiro = pNovo;
    else{
        auxUltimo->prox = pNovo;
    }
}
