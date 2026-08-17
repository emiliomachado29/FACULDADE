#include <stdio.h>
#include <stdlib.h>

int quadperf (int num)
{
    if(num < 0)
    {
        return 0;
    }
    for(int i = 0; i * i <= num; i++)
    {
        if(i * i == num)
        {
            return 1;
        }
    }
    return 0;
}

int main ()
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(quadperf(n) == 1)
    {
        printf("E um quadrado perfeito\n");
    }
    else
    {
        printf("Nao e um quadrado perfeito");
    }
    return 0;
}