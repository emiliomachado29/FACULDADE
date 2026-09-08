#include <stdio.h>
#include "mstring.h"

int main()
{
    char str[100];
    char str2[100];
    int opcao;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    int tam = mstrlen(str);

    if (str[tam - 1] == '\n')
    {
        str[tam - 1] = '\0';
    }

    printf("\nEscolha uma opcao:\n");
    printf("1 - Tamanho da string\n");
    printf("2 - Copiar string\n");
    printf("3 - Concatenar string\n");
    printf("4 - Comparar strings\n");
    printf("5 - Converter para maiusculas\n");
    printf("6 - Converter para minusculas\n");
    printf("7 - Contar vogais\n");
    printf("8 - Verificar palindromo\n");
    printf("9 - Remover espacos\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    getchar();

    switch(opcao)
    {
        case 1:
            printf("Tamanho: %d\n", mstrlen(str));
            break;

        case 2:
            mstrcpy(str2, str);
            printf("Copia: %s\n", str2);
            break;

        case 3:
            printf("Digite outra string: ");
            fgets(str2, sizeof(str2), stdin);

            tam = mstrlen(str2);

            if (str2[tam - 1] == '\n')
            {
                str2[tam - 1] = '\0';
            }

            mstrcat(str, str2);

            printf("Resultado: %s\n", str);
            break;

        case 4:
            printf("Digite outra string: ");
            fgets(str2, sizeof(str2), stdin);

            tam = mstrlen(str2);

            if (str2[tam - 1] == '\n')
            {
                str2[tam - 1] = '\0';
            }

            printf("Comparacao: %d\n", mstrcmp(str, str2));
            break;

        case 5:
            mstrupper(str);
            printf("Maiusculas: %s\n", str);
            break;

        case 6:
            mstrlower(str);
            printf("Minusculas: %s\n", str);
            break;

        case 7:
            printf("Quantidade de vogais: %d\n",
                   mcount_vogais(str));
            break;

        case 8:
            if (meh_palindromo(str))
            {
                printf("Eh palindromo.\n");
            }
            else
            {
                printf("Nao eh palindromo.\n");
            }
            break;

        case 9:
            mremove_espacos(str);
            printf("Sem espacos: %s\n", str);
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}