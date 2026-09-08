#include <stdio.h>
#include <stdlib.h>

int somaAlgarismos(int num)
{
    int soma = 0;

    while(num > 0)
    {
        soma += num % 10;
        num /= 10;
    }

    return soma;
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num <= 0)
        printf("Numero invalido!");
    else
        printf("Soma dos algarismos = %d", somaAlgarismos(num));

    return 0;
}