#include <stdio.h>
#include "BubbleSort.h"

struct Data{
  int dia, mes, ano;
};

int compararData(void* info1, void* info2){
    struct Data* pd1 = (struct Data*)info1;
    struct Data* pd2 = (struct Data*)info2;

    if (((pd1->ano - pd2->ano)*365) +
        ((pd1->mes - pd2->mes)* 30) +
         (pd1->dia - pd2->dia) > 0)
        return -1;
    else
        return 1;
}

struct Data* alocaData(int dia, int mes, int ano){
   struct Data *pd = (struct Data*) malloc(sizeof(struct Data));
   pd->dia   = dia;
   pd->mes   = mes;
   pd->ano   = ano;
   return pd;
}

void main()
{
   struct Data* vd[5];

   vd[0] = alocaData(01,03,2021);
   vd[1] = alocaData(01,02,2021);
   vd[2] = alocaData(05,01,2021);
   vd[3] = alocaData(07,02,2021);
   vd[4] = alocaData(28,02,2021);

   bubbleSort(vd, 5, &compararData);

   int i;
   for (i=0; i<5; i++){
      printf("%d/%d/%d - ", vd[i]->dia, vd[i]->mes, vd[i]->ano);
   }
}