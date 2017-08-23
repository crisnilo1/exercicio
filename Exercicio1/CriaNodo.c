#include"lista.h"

no * criarNo(int conteudo){
    no *novo=(no*)malloc(sizeof(no));
    novo->conteudo = conteudo;
    novo->prox=NULL;
    return novo;
}
