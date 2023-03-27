  #include<time.h>
  #include <iostream>
  #include <stdio.h>
  #include <stdlib.h>

using namespace std;

char * criarArquivoOrdenado(){
  FILE *ordenado;
  int tam, x;
  static char nomeArquivo[255];

  printf("Informe o tamanho dos arquivos: ");
  scanf("%d", &tam);

  sprintf(nomeArquivo, "Ordenado%05d.txt", tam);

  ordenado = fopen(nomeArquivo, "w");
  for (x=1;x<=tam;x++){
    fprintf(ordenado, "%d\n", x);
  }
  fclose(ordenado);

  return nomeArquivo;
}

char * criarArquivoInvertido(){
  FILE *invertido;
  int tam, x;
  static char nomeArquivo[255];

  printf("Informe o tamanho dos arquivos: ");
  scanf("%d", &tam);
  
  sprintf(nomeArquivo, "Invertido%05d.txt", tam);
  invertido = fopen(nomeArquivo, "w");
    for (x=tam;x>0;x--){
      fprintf(invertido, "%d\n", x);
    }
  fclose(invertido);

  return nomeArquivo;
}

char * criarArquivoRandomico(){
  FILE *randomico;
  int tam, x;
  static char nomeArquivo[255];

  printf("Informe o tamanho dos arquivos: ");
  scanf("%d", &tam);
  time_t t;
  
  srand((unsigned) time(&t));

  sprintf(nomeArquivo, "Randomico%05d.txt", tam);

  randomico = fopen(nomeArquivo, "w");
    for (x=1;x<=tam;x++){
      fprintf(randomico, "%d\n", rand() % tam+1);
    }
  fclose(randomico);

  return nomeArquivo;
}