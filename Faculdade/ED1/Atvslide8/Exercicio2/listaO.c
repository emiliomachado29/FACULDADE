#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista {
    int no[20];
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

int insere_ord(Lista l, int elem) {
    int i;

    if (l == NULL || lista_cheia(l))
        return 0;

    i = l->Fim;

    while (i > 0 && l->no[i - 1] > elem) {
        l->no[i] = l->no[i - 1];
        i--;
    }

    l->no[i] = elem;
    l->Fim++;

    return 1;
}

int remove_ord(Lista l, int elem) {
    int i;

    if (l == NULL || lista_vazia(l))
        return 0;

    i = 0;

    while (i < l->Fim && l->no[i] < elem)
        i++;

    if (i == l->Fim || l->no[i] != elem)
        return 0;

    for (; i < l->Fim - 1; i++)
        l->no[i] = l->no[i + 1];

    l->Fim--;

    return 1;
}

int obtem_valor_elem(Lista l, int pos, int *elem) {
    if (l == NULL || elem == NULL || pos < 0 || pos >= l->Fim)
        return 0;

    *elem = l->no[pos];
    return 1;
}

void imprime_lista(Lista l) {
    int i;

    if (l == NULL || lista_vazia(l)) {
        printf("Lista vazia.\n");
        return;
    }

    printf("Lista: ");
    for (i = 0; i < l->Fim; i++)
        printf("%d ", l->no[i]);
    printf("\n");
}
