int particiona(int vetor[], int init, int final){
    int aux;
    int esq = init;
    int dir = final;
    int pivo = vetor[init];
    
    
    while(esq < dir){
        while((vetor[esq] <= pivo) && (esq < dir))
            esq++;
        while(vetor[dir] > pivo)
            dir--;
        if (esq < dir){
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;
        }
    }
    vetor[init] = vetor[dir];
    vetor[dir] = pivo;
    return dir;
}

void quickSortInit(int vetor[], int init, int final){
    
    int pivo;
    if(final>init){
    pivo = particiona(vetor, init, final);
    quickSortInit(vetor,init,pivo-1);
    quickSortInit(vetor,pivo+1,final);
    }
    
    
}
void quickSort(int vetor[], int init, int final){

    clock_t inicio = clock();

    quickSortInit(vetor, init, final-1);

    double tempo = (double)(clock() - inicio) / CLOCKS_PER_SEC;
    // for (int i=0; i<final; i++){
    //         cout << vetor[i] << endl;
    //     }
    cout << endl << "TEMPO = " << tempo << endl;

    
}