#include <stdio.h>


struct Noh{
    void*          info;
    struct Noh*    prox;
};


void main(){

  struct Noh* primeiro;

  primeiro = (struct Noh*) malloc(sizeof(struct Noh));

  struct Noh* novo;
  novo = (struct Noh*) malloc(sizeof(struct Noh));

  /* esta linha faz o encadeamento */
  primeiro->prox = novo;
  novo->prox     = NULL;




}