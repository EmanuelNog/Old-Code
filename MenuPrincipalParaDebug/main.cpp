#include <iostream>
#include <conio.h>
#include <string>
#include "criarArquivo.h"
#include "bubbleSort.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "quickSort.h"
using namespace std;


// void Ordenar(int, int*, int);
// void MostrarArquivo(int*, int);
// int lerArquivo(int*, char);

void Ordenar(int index,int vetor[], int size){

    switch(index){
        case 1:
        bubbleSort(vetor,size);
        break;
        case 2:
        insertionSort(vetor,size);
        break;
        case 3:
        selectionSort(vetor,size);
        break;
        case 4:
        quickSort(vetor,0,size);
        break;
        default:
        break;
    }

}

void MostrarArquivo(int vetor[], int size){

    for (int i=0; i<size; i++){
            cout << vetor[i] << endl;
        }
}

int lerArquivo(int vetor[], char nomeArquivo[]){

    FILE *arquivo;
    int i=0;

    cout << "Nome do arquivo:" <<endl;
    //cin.getline(nomeArquivo, 255);
    //nomeArquivo = "Ordenado00010.txt";
    //nomeArquivo = "Invertido00010.txt";
    //nomeArquivo = "Randomico00010.txt";
    nomeArquivo = "Ordenado750000.txt";
    //nomeArquivo = "Invertido750000.txt";
    //nomeArquivo = "Randomico750000.txt";
    //nomeArquivo = "Ordenado1000000.txt";
    //nomeArquivo = "Invertido1000000.txt";
    //nomeArquivo = "Randomico1000000.txt";

    arquivo = fopen(nomeArquivo, "r");
        while(fscanf(arquivo,"%i",&vetor[i]) == 1){
            i++;
        };
    fclose(arquivo);
    cout<< "Quantidade de Valores: " << i << endl;

    return i;
}

int main(){
    //char *NomeArquivoOrdenado = criarArquivoOrdenado();
    //char *NomeArquivoInvertido = criarArquivoInvertido();
    //char *NomeArquivoRandomico = criarArquivoRandomico();
    /*for (int i=0;i<20;i++){
    cout << NomeArquivoOrdenado[i];
    }*/

    char nomeArquivo[255];
    int *vetor = (int*) malloc(1000000 * sizeof(int));
    int size;


    size = lerArquivo(vetor,nomeArquivo);
    Ordenar(4,vetor,size);

    //bubbleSort(vetor,size);
    /*cout << "Escolha uma Opcao:" << endl;
    cout << "1. Ler arquivo criado" << endl;
    cout << "2. Ordenar arquivo com BubbleSort" << endl;
    cout << "3. Ordenar arquivo com InsertionSort" << endl;
    switch (getch())
    {
        case 1:
            size = lerArquivo(vetor,nomeArquivo);
            MostrarArquivo(vetor, size);
        case 2:
            Ordenar(1,vetor,size);
        case 3:
            Ordenar(2,vetor,size);
        case 4:
            Ordenar(3,vetor,size);

        default:
            break;
    }*/

    return 0;
}
