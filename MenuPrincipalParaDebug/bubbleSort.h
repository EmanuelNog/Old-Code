void bubbleSort(int vetor[], int size){
    //int valores[10] = {10,3,2,1,6,5,4,9,8,7};
    //int *vetor = (int*) malloc(10 * sizeof(int));//param
    //int size=10; //param
    int aux;

    
    // for (int i=0; i<size; i++){
    //     vetor[i] = valores[i];
    // }
    clock_t inicio = clock();
    for (int j=0; j<size; j++){
        for (int i=0; i<size-1-j; i++){
            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    } 
    double tempo = (double)(clock() - inicio) / CLOCKS_PER_SEC;
    
// for (int i=0; i<size; i++){
//         cout << vetor[i] << endl;
//     }
    cout << endl << "TEMPO = " << tempo << endl;
}