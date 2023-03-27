void insertionSort(int vetor[], int size){
    //int valores[10] = {10,3,2,1,6,5,4,9,8,7};
    //int *vetor = (int*) malloc(10 * sizeof(int));//param
    //int size=10; //param
    int i,j,atual;

    
    
    clock_t inicio = clock();
    for (i=1; i<size; i++){
        atual = vetor[i];
        for (j=i; (j>0) && (atual < vetor[j-1]); j--){
            vetor[j] = vetor[j-1];
        }
        vetor[j]=atual;
        
    } 
    double tempo = (double)(clock() - inicio) / CLOCKS_PER_SEC;
    
    // for (i=0; i<size; i++){
    //     cout << vetor[i] << endl;
    // }
    cout << endl << "TEMPO = " << tempo << endl;
}