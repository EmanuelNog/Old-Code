#ifndef FATORACAOPRIMA_H
#define FATORACAOPRIMA_H

pDFila fatoracaoPrima(int N){

    pDFila fila = criarFila();
    int D=2;

    while(N != 1){

        if(N % D == 0){
            N = N/D;
            enfileirarInfo(fila, alocaInt(D));
        }else{
            D++;
        }
    }

    return fila;
    
}
#endif
