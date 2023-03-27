#ifndef NGE_H
#define NGE_H

pDLista NGE(pDFila fila, FuncaoComparacao fc){

    int flag;
    int tamanhoFila = fila->pdLista->quantidade;
    pDLista listaDeRetorno = criarLista();
    pNoh NohNumero = fila->pdLista->primeiro;
    
    pNoh NohNGE = NohNumero->prox;
    
    for(int i=0; i<tamanhoFila; i++){

        flag=0;
        pDLista infoDupla = criarLista();
        
        while(flag != 1){
            if(fc(NohNumero->info,NohNGE->info)>0){
                flag = 1;
                incluirInfo(infoDupla,NohNumero->info);
                incluirInfo(infoDupla,NohNGE->info);

                incluirInfo(listaDeRetorno, infoDupla);

            }else if(NohNGE->prox != NULL){
                NohNGE = NohNGE->prox;
            
                    }else{
                        flag = 1;
                        //incluirInfo(listaDeRetorno, NohNumero->info);
                        //incluirInfo(listaDeRetorno, alocaInt(-1));
                        incluirInfo(infoDupla,NohNumero->info);
                        incluirInfo(infoDupla, alocaInt(-1));
                
                        incluirInfo(listaDeRetorno, infoDupla);
                        
                    }
        }
        NohNumero = NohNumero->prox;
    }

    return listaDeRetorno;
}
#endif