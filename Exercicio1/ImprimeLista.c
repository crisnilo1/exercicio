#include"lista.h"

void imprimirLista(no *lista){
    while(lista!=NULL){
        printf("%d",lista->conteudo);
        lista=lista->prox;
    }
}
