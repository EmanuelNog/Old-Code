#include <stdio.h>
#include <math.h>

typedef double (*FuncaoDouble) (double);

void main()
{
    FuncaoDouble funcoes[5];
    funcoes[0] = &cos;
    funcoes[1] = &sin;
    funcoes[2] = &tan;
    funcoes[3] = &log;
    funcoes[4] = &exp;

    FuncaoDouble pfd;
    int i;
    for (i=0; i<5; i++){
      pfd = funcoes[i];
      printf("%f\n", pfd(90.0));
    }



}