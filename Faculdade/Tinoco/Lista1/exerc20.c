#include <stdio.h>

int primo(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int quantidadePrimos(int N)
{
    int cont = 0;

    for(int i = 2; i < N; i++)
    {
        if(primo(i))
            cont++;
    }

    return cont;
}

int main()
{
    int N;

    scanf("%d", &N);

    printf("%d", quantidadePrimos(N));

    return 0;
}