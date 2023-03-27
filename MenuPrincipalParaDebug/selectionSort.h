void selectionSort(int vetor[], int size){
    //int valores[10] = {10,3,2,1,6,5,4,9,8,7};
    //int *vetor = (int*) malloc(10 * sizeof(int));//param
    //int size=10; //param
    int i,j,menor,troca;

    
    
    clock_t inicio = clock();
    for (i=0; i< size-1; i++){
        menor = i;
        for(j=i+1; j<size; j++){
            if(vetor[j] < vetor[menor]){
                menor = j;
            }
            if(i != menor){
                troca = vetor[i];
                vetor[i] = vetor[menor];
                vetor[menor] = troca;
            }
        }
    }
    double tempo = (double)(clock() - inicio) / CLOCKS_PER_SEC;
    
for (i=0; i<size; i++){
        cout << vetor[i] << endl;
    }
    cout << endl << "TEMPO = " << tempo << endl;
    return;
}