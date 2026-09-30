#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista {
    Bebida bebida[20];
    int Fim;
};

Lista criar_lista() {
    Lista l = (Lista) malloc(sizeof(struct lista));

    if (l != NULL)
        l->Fim = 0;

    return l;
}

int lista_vazia(Lista l) {
    if (l == NULL)
        return 1;

    return l->Fim == 0;
}

int lista_cheia(Lista l) {
    if (l == NULL)
        return 0;

    return l->Fim == 20;
}

int insere_bebida(Lista l, Bebida bebida) {
    if (l == NULL || lista_cheia(l))
        return 0;

    l->bebida[l->Fim] = bebida;
    l->Fim++;

    return 1;
}

int remove_ultimo(Lista l) {
    if (l == NULL || lista_vazia(l))
        return 0;

    l->Fim--;
    return 1;
}

void imprime_tabela(Lista l) {
    int i;

    if (l == NULL || lista_vazia(l)) {
        printf("Lista vazia.\n");
        return;
    }

    printf("\n%-20s %-10s %-10s\n", "Nome", "Volume", "Preco");
    printf("---------------------------------------------\n");

    for (i = 0; i < l->Fim; i++) {
        printf("%-20s %-10d R$ %.2f\n",
               l->bebida[i].nome,
               l->bebida[i].volume,
               l->bebida[i].preco);
    }
}
