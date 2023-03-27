pDLista decomporNumero(int Numero){

    pDLista Lista = criarLista();

    int NumeroDecomposto[3];
    
    int aux_i,aux_j,aux_k,aux_l;

    aux_i = Numero;
    aux_j = 10;
    aux_k = 1;
    aux_l = 0;

    while(aux_i>0){
        NumeroDecomposto[0] = aux_l;
        NumeroDecomposto[1] = 10;
        NumeroDecomposto[2] = ((Numero % aux_j)/aux_k);

        incluirInfo(Lista,NumeroDecomposto);
        printf(" - ");

        imprimirLista(Lista,imprimeArrayDe3Int);

        aux_j*=10;
        aux_k*=10;
        aux_l++;
        aux_i/=10;
    }
    printf(" \n");
    
    return Lista;
}