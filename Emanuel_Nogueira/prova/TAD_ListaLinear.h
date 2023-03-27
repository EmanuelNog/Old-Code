#ifndef LISTA_TAD_H
#define LISTA_TAD_H

/*------------------------------------------*/
/* tipos de dados                           */
/*------------------------------------------*/
typedef struct noh  Noh;
typedef Noh*        pNoh;

/* descritor da lista */
typedef struct dLista  DLista;
typedef DLista*        pDLista;


typedef int   (*FuncaoComparacao)(void *, void *);
typedef void  (*FuncaoImpressao) (void *);
typedef void* (*FuncaoAlocacao)  (void *);
typedef int   (*FuncaoPredicado) (void *);

/*------------------------------------------*/
/* operacoes                                */
/*------------------------------------------*/
pDLista  criarLista    ();
void     incluirInfo   (pDLista, void *);
int      excluirInfo   (pDLista, void *, FuncaoComparacao);
/* o retorno int indica a posicao da informacao procurada dentro da lista*/
int      contemInfo    (pDLista, void *, FuncaoComparacao);
void     imprimirLista (pDLista, FuncaoImpressao);
void     destruirLista (pDLista);
pDLista  duplicarLista (pDLista, FuncaoAlocacao);
/* o parametro int estabelece a posicao da lista onde a divisao deve acontecer */
pDLista  dividirLista  (pDLista, int);
void     incluirInfoComeco   (pDLista, void *);
void     incluirInfoMeio   (pDLista, void *, int);
void     moveMenor   (pDLista, FuncaoComparacao);
pDLista     split   (pDLista, FuncaoPredicado);
pDLista     decomporNumero   (int);
void* maiorElemento(pDLista, void*, FuncaoComparacao);

#endif

