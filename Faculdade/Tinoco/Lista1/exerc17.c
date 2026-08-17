#include <stdio.h>

int somaEntre(int a, int b)
{
    int soma = 0;

    for(int i = a + 1; i < b; i++)
        soma += i;

    return soma;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", somaEntre(a,b));

    return 0;
}