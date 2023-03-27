#include <stdio.h>
#include <stdlib.h>
#include "ListaDinEncad.h"

struct elemento{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;


Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL)
        *li=NULL;
    return li;
}

void libera_lista(Lista* li){
    if(li != NULL){
        Elem* no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int tamanho_lista(Lista* li){
    if(li == NULL)
        return 0;
    int cont = 0;
    Elem* no = *li;
    while(no != NULL){
        cont++;
        no = no->prox;
    }
    return cont;
}

int lista_cheia(Lista* li){
    return 0;
}

int lista_vazia(Lista* li){
    if(li == NULL)
    return 1;
    if(*li == NULL)
    return 1;
}

int insere_lista(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    Elem* no;
    no = (Elem*) malloc (sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
}

int insere_lista_final(Lista* li, struct aluno al){// implementei de outro jeito, ver se funciona caso lista vazia
    if(li == NULL)
        return 0;
    
    Elem* noFinal = *li;

    Elem* no = (Elem*) malloc(sizeof(Elem));
    no->dados = al;
    no->prox = NULL;

    while(noFinal =! NULL)
        noFinal = noFinal->prox;

    noFinal->prox = no;
    return 1;
}

int insere_lista_ordenada(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    Elem *no;
    no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL)
        return 0;
    no->dados = al;
    if((*li)== NULL){
        no->prox = NULL;
        *li = no;
        return 1;
    }
    else{
        Elem *ant, *atual = *li;
        while(atual != NULL && atual->dados.matricula < al.matricula){
            ant = atual;
            atual = atual->prox;
        } 
        if(atual == *li){
            no->prox = (*li);
            *li = no;
        }else{
            no->prox = atual;
            ant->prox = no;
        }
        return 1;

    }
    
}

int remove_lista_inicio(Lista* li){
    if(li == NULL)
        return 0;
    if(li->qtd == MAX)
        return 0;
    
    int k=0;
    for(k=0;k < li->qtd-1; k++)
        li->dados[k] = li->dados[k+1];
    li->qtd--;
    return 1;
}

int remove_lista_final(Lista* li){
    if(li == NULL)
        return 0;
    if(li->qtd == 0)
        return 0;

    li->qtd--;
    return 1;
}

int remove_lista(Lista* li, int mat){ 
    if(li == NULL)
        return 0;
    if(li->qtd ==0)
        return 0;
    
    int k,i=0;
    while(i< li->qtd && li->dados[i].matricula != mat)
        i++;
    if(i== li->qtd)
        return 0;
    
    for(k=i; k < li->qtd-1; k++)
        li->dados[k] = li->dados[k+1];
    li->qtd--;
    return 1;
}

int remove_lista_otimizado(Lista* li, int mat){ //remove sem manter a ordenacao
    if(li == NULL)
        return 0;
    if(li->qtd ==0)
        return 0;

    int i=0;
    while(i < li->qtd && li-> dados[i].matricula !=mat)
        i++;
    if(i == li->qtd)
        return 0;

    li->dados[i] = li->dados[li->qtd];
    li->qtd--;
    return 1;
}

int busca_lista_pos(Lista* li, int pos, struct aluno *al){ //busca por posicao (numero de ordem, nao do array)
    if(li ==NULL || pos <=0 || pos > li->qtd)
    return 0;
    *al = li->dados[pos-1];
    return 1;
}

int busca_lista_mat(Lista* li, int mat, struct aluno *al){
    if(li == NULL)
        return 0;
    int i=0;
    while(i<li->qtd && li->dados[i].matricula != mat)
    i++;
    if(i == li->qtd)
        return 0;

    *al = li->dados[i];
    return 1;
}
