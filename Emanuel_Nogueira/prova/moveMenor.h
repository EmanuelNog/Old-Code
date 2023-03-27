void moveMenor(pDLista pd, FuncaoComparacao fc){

    if(pd == NULL){
        printf("lista vazia");
        return 0;
    }

    int menorValor = pd->primeiro->info;
    int i=1;
    int posicaoDeTroca = 1;


    pNoh NohAuxiliar = malloc(sizeof(Noh));
    pNoh NohAtual = malloc(sizeof(Noh));
    pNoh NohAnterior = malloc(sizeof(Noh));
    pNoh NohProximo = malloc(sizeof(Noh));
    NohAuxiliar = pd->primeiro;
    NohAtual = pd->primeiro;
    NohProximo = NohAtual->prox;

    while(NohAuxiliar->prox != NULL){
        
        if((fc( NohAuxiliar->info, menorValor ))>0){
            menorValor = NohAuxiliar->info;
            posicaoDeTroca = i;
        }
        NohAuxiliar = NohAuxiliar->prox;
        i++;
    }

    while(posicaoDeTroca > 1){
        NohAnterior = NohAtual;
        NohAtual = NohProximo;
        NohProximo = NohProximo->prox;
        posicaoDeTroca--;
    }

    NohAtual->prox = pd->primeiro->prox;

    NohAnterior->prox = pd->primeiro;
    pd->primeiro->prox = NohProximo;

    pd->primeiro = NohAtual;
}