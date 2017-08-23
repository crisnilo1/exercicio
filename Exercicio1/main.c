#include "lista.h"

int main()
{
    no *lista;
    char op;
    lista=NULL;

    printf("\n\nt\tOPCAO:");
    printf("a.Inserir nodos\n");
    printf("b.nRemover nodos\n");
    printf("c.Imprimir nodos\n");
    printf("d.sair");
    printf("\n\n\n\t******************************\n\n");
    printf("\n\tInforme opcao");
    do{
        scanf("\n\n\t%c",&op);

        switch(op){
            case 'a':
            if(!lista){
            lista = inserirNodos(&lista);
            printf("Elementos inseridos com sucesso!!!");
            }else{
                printf("Esse elemento ja existe!!!");
            }
            printf("opcao:\n");
            break;

            case 'b':
            lista = removerNodos(&lista,2);
            printf("\n opcao");
            break;

            case 'c':
                if(lista){
                    printf("\\n\nImprimindo elemento da lista");
                    imprimirLista(lista);
                }else
                    printf("Lista vazia!!");

                    printf("\nopcao:");

            break;

            case 'd':
                printf("exit!!");
                break;
            default:
                printf("opcao invalida!!!");
                printf("\n\nopcao:");
            break;
            }
        }while(op!='d');

    free(lista);
    printf("\n");

    return 0;
}
