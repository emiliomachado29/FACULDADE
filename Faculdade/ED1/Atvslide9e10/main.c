#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

int main(){

    Lista L = cria_lista();
    int n, i, elem, opcao;
    int *vetor;

    printf("Quantos elementos deseja inserir? ");
    if(scanf("%d", &n) != 1 || n < 0){
        printf("Tamanho invalido!\n");
        return 1;
    }

    vetor = (int *) malloc(n * sizeof(int));
    if(n > 0 && vetor == NULL){
        printf("Erro de alocacao!\n");
        return 1;
    }

    for(i = 0; i < n; i++){
        printf("Elemento %d: ", i + 1);
        if(scanf("%d", &vetor[i]) != 1){
            printf("Valor invalido!\n");
            free(vetor);
            libera_lista(&L);
            return 1;
        }
        insere_ord(&L, vetor[i]);
    }
    free(vetor);

    do{
        printf("\n===== MENU =====\n");
        printf("1 - Inserir elemento\n");
        printf("2 - Remover elemento\n");
        printf("3 - Buscar elemento\n");
        printf("4 - Imprimir lista\n");
        printf("5 - Tamanho da lista\n");
        printf("6 - Esvaziar lista\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        if(scanf("%d", &opcao) != 1)
            break;

        switch(opcao){
            case 1:
                printf("Elemento a inserir: ");
                scanf("%d", &elem);
                if(insere_ord(&L, elem))
                    printf("Elemento %d inserido.\n", elem);
                else
                    printf("Falha ao inserir.\n");
                break;

            case 2:
                printf("Elemento a remover: ");
                scanf("%d", &elem);
                if(remove_ord(&L, elem))
                    printf("Elemento %d removido.\n", elem);
                else
                    printf("Elemento %d nao encontrado.\n", elem);
                break;

            case 3:
                printf("Elemento a buscar: ");
                scanf("%d", &elem);
                if(busca(L, elem))
                    printf("Elemento %d encontrado.\n", elem);
                else
                    printf("Elemento %d nao encontrado.\n", elem);
                break;

            case 4:
                if(lista_vazia(L))
                    printf("Lista vazia.\n");
                else{
                    printf("Lista: ");
                    imprime_lista(L);
                }
                break;

            case 5:
                printf("Tamanho: %d\n", tamanho(L));
                break;

            case 6:
                libera_lista(&L);
                printf("Lista esvaziada.\n");
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    }while(opcao != 0);

    libera_lista(&L);

    return 0;
}
