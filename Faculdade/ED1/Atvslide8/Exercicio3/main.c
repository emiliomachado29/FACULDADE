#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    Lista l;
    Bebida bebida;
    int opcao;

    l = criar_lista();

    if (l == NULL) {
        printf("Erro ao criar a lista.\n");
        return 1;
    }

    do {
        printf("\n1 - Inserir registro\n");
        printf("2 - Apagar ultimo registro\n");
        printf("3 - Imprimir tabela\n");
        printf("4 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Nome: ");
                scanf("%19s", bebida.nome);

                printf("Volume (ml): ");
                scanf("%d", &bebida.volume);

                printf("Preco: ");
                scanf("%f", &bebida.preco);

                if (insere_bebida(l, bebida))
                    printf("Registro inserido.\n");
                else
                    printf("Nao foi possivel inserir.\n");
                break;

            case 2:
                if (remove_ultimo(l))
                    printf("Ultimo registro removido.\n");
                else
                    printf("A lista esta vazia.\n");
                break;

            case 3:
                imprime_tabela(l);
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 4);

    free(l);
    return 0;
}
