#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>

typedef struct nodo{
    int conteudo;
    struct nodo * prox;
}no;

no * criarNo(int conteudo);
no * inserirNodos(no **lista);
no * removerNodos(no **lista,int conteudo);
void imprimirLista(no *lista);



#endif
