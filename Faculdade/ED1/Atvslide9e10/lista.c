#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

struct no{
    int inf;
    struct no *prox;
};

Lista cria_lista(){
    return NULL;
}

int lista_vazia(Lista lst){

    if(lst == NULL)
        return 1;
    else
        return 0;
}

int insere_ord(Lista *lst, int elem){

    /* Criterio de parada: lista vazia OU elem <= 1o no da lista */
    if(lista_vazia(*lst) || elem <= (*lst)->inf){
        Lista N = (Lista) malloc(sizeof(struct no));
        if(N == NULL)
            return 0;

        N->inf = elem;
        N->prox = *lst;
        *lst = N;
        return 1;
    }

    /* Passo recursivo: insere na cauda */
    return insere_ord(&(*lst)->prox, elem);
}

int remove_ord(Lista *lst, int elem){

    /* Criterio de parada: lista vazia OU elem < 1o no (nao existe) */
    if(lista_vazia(*lst) || elem < (*lst)->inf)
        return 0;

    /* Criterio de parada: elem = 1o no da lista */
    if(elem == (*lst)->inf){
        Lista aux = *lst;
        *lst = aux->prox;
        free(aux);
        return 1;
    }

    /* Passo recursivo: remove da cauda */
    return remove_ord(&(*lst)->prox, elem);
}

int tamanho(Lista lst){

    if(lista_vazia(lst))
        return 0;

    return 1 + tamanho(lst->prox);
}

int busca(Lista lst, int elem){

    if(lista_vazia(lst) || elem < lst->inf)
        return 0;

    if(elem == lst->inf)
        return 1;

    return busca(lst->prox, elem);
}

void imprime_lista(Lista lst){

    if(lista_vazia(lst)){
        printf("\n");
        return;
    }

    printf("%d ", lst->inf);
    imprime_lista(lst->prox);
}

void libera_lista(Lista *lst){

    if(lista_vazia(*lst))
        return;

    libera_lista(&(*lst)->prox);
    free(*lst);
    *lst = NULL;
}
