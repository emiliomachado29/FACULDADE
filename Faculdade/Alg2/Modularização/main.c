#include <stdio.h>
#include "funcao.h"

int main()
{
    int n1, n2;
    fracao receber;

    scanf("%d %d",&n1,&n2);

    receber = gerar(n1,n2);

    printf("%d/%d",receber.numerador, receber.denominador);
    return 0;
}

 