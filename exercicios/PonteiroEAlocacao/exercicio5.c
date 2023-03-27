#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa
{
    char Nome[10];
    int Idade;
};

void FuncaoQueRecebe(){

}

struct Pessoa *p[2];

void main(){

    //pessoa[0] *a = malloc(sizeof(pessoa));
    //pessoa[1] *b = malloc(sizeof(pessoa));

    

    p[0]->Idade = 2;
    p[0]->Nome[0] = gets("jao");
    
    p[1]->Idade = 3;
    p[1]->Nome[0] = "gas";


    printf("%i\n", p[0]->Idade );
    printf("%s", p[0]->Nome);

    printf("----\n");
    
    printf("%i\n", p[1]->Idade);
    printf("%s", p[1]->Nome);
}