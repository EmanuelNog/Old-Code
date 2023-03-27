#include <stdio.h>

int ocorrencias(int *n[8], int k, int l,int seta,int contadorK,int contadorL)
{
    if(n[seta] == k)
    contadorK++;
    else if(n[seta] == l)
    contadorL++;

    return ocorrencias(n[8],3,9,seta,contadorK,contadorL)

};

int main()
{
    
    printf("%d", ocorrencias(73021913,3,9,0,0,0));
};