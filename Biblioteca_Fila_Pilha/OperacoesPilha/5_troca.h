#ifndef TROCA_PILHA_H
#define TROCA_PILHA_H

void troca(pDPilha pilha, int posicao){

    void *aux1,*aux2;
    int qtdInteracoes;
    pDPilha pilhaAux = criarPilha();
    qtdInteracoes = pilha->pdLista->quantidade - posicao;

    if(posicao == pilha->pdLista->quantidade){
        return;
    }

    aux1 = desempilharInfo(pilha);
    
    while(qtdInteracoes > 1){
        empilharInfo(pilhaAux, desempilharInfo(pilha));
        qtdInteracoes--;
    }

    aux2 = desempilharInfo(pilha);
    empilharInfo(pilha, aux1);

    while(pilhaAux->pdLista->quantidade > 0)
        empilharInfo(pilha, desempilharInfo(pilhaAux));

    empilharInfo(pilha, aux2);


}

#endif