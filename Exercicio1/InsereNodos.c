#include "lista.h"

no * inserirNodos(no **lista){
    no *inicio,*p;
    int n[11]={1,2,3,4,5,6,7,8,9,10,11},i;

    for(i=0;i<11;i++){
        if(*lista==NULL){
            p=criarNo(n[i]);
            inicio = *lista=p;
        }else{
            p=criarNo(n[i]);
            (*lista)->prox=p;
            (*lista)=(*lista)->prox;
        }
    }
    return inicio;
}


