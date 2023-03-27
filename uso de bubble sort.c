#include <stdio.h>
#include "BubbleSort.h"

int compararFloat(void *info1, void *info2){

    float* pf1 = (float*)info1;
    float* pf2 = (float*)info2;
    if (*pf1 > *pf2)
        return -1;
    else
        return 1;
}

float* alocaFloat(float valor){
   float *pf = (float*) malloc(sizeof(float));
   *pf       = valor;
   return pf;
}

void main()
{
   float* vf[5];

   vf[0] = alocaFloat(2.5f);
   vf[1] = alocaFloat(2.1f);
   vf[2] = alocaFloat(2.7f);
   vf[3] = alocaFloat(2.05f);
   vf[4] = alocaFloat(2.2f);

   bubbleSort(vf, 5, &compararFloat);

   int i;
   for (i=0; i<5; i++){
      printf("%f - ", *vf[i]);
   }
}
