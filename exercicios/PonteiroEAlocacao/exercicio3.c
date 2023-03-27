#include <stdio.h>
#include <stdlib.h>

void AlocadorDeMemoria(int Nnumeros, int *ArrayDeNnumeros)
{
    ArrayDeNnumeros = malloc((sizeof(int) * Nnumeros));
}

void MaiorNumero(int Nnumeros,int *ArrayDeNnumeros, int *maiorValor)
{
    int i;

    for(i=0;i<Nnumeros;i++)
    {
        printf("informe o numero\n");
        scanf("%i",(ArrayDeNnumeros+i));


        printf("array %i: %d\n",i,*(ArrayDeNnumeros+i));

        if(*maiorValor < *(ArrayDeNnumeros+i))
        {
            *maiorValor = *(ArrayDeNnumeros+i);
        }
    }

}

void main()
{
    int Nnumeros;
    int ArrayDeNnumeros;
    int maiorValor=0;

    scanf("%i",&Nnumeros);

    AlocadorDeMemoria(Nnumeros,&ArrayDeNnumeros);
    MaiorNumero(Nnumeros, &ArrayDeNnumeros,&maiorValor);

    printf("%d", maiorValor);
}
