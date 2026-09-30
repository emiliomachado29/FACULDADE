#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    Lista l;
    int valores[] = {4, 8, -1, 19, 2, 7, 8, 5, 9, 22, 45};
    int i;

    l = criar_lista();

    if (l == NULL) {
        printf("Erro ao criar a lista.\n");
        return 1;
    }

    printf("Lista inicializada:\n");
    imprime_lista(l);

    for (i = 0; i < 11; i++)
        insere_elem(l, valores[i]);

    printf("\nDepois das insercoes:\n");
    imprime_lista(l);

    remove_elem(l, 8);

    printf("\nDepois de remover o elemento 8:\n");
    imprime_lista(l);

    free(l);
    return 0;
}
