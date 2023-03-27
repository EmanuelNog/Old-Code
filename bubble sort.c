#include <stdio.h>


void bubbleSort(int dados[], int tam)
{
    int i, j;
    int temp;


    for (i=0; i<tam-1; i++){
       printf("Itera��o %d  \n", i+1);
       for (j=0; j<tam-(i+1); j++){

         if (dados[j] > dados[j+1]){
            printf("  Trocando... \n");
            temp       = dados[j];
            dados[j]   = dados[j+1];
            dados[j+1] = temp;
         }
       }
    }
}

void main()
{
   int vi[5] = {6, 3, 5, 2, 4};

   bubbleSort(vi, 5);

   int i;
   for (i=0; i<5; i++){
      printf("%d - ", vi[i]);
   }
}
