#include <stdio.h>
#include <stdlib.h>
#include "operacoes.h"

int main()
{   
    int op, n1, n2, receber;

    printf("Escolha uma das operacoes abaixo:\n");
    printf(" 1 para soma\n");
    printf(" 2 para subtracao\n");
    printf(" 3 para multiplicacao\n");
    printf(" 4 para divisao\n");
    scanf("%d", &op);

    printf("Digite u numero: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if( op == 1)
    {
         printf("O resultado da operacao escolhida e: %d\n",soma(n1, n2));
    }
    else if( op == 2)
    {
         printf("O resultado da operacao escolhida e: %d\n",subtrai(n1, n2));
    }
    else if( op == 3)
    {
         printf("O resultado da operacao escolhida e: %d\n",multiplica(n1, n2));
    }
    else
    {
         printf("O resultado da operacao escolhida e: %d\n",divide(n1, n2));
    }

    return 0;
}
