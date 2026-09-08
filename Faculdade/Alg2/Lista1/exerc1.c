#include <stdio.h>

int dobro (int num)
{
    return num * 2;
}
int main()
{
    int n;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    printf("O dobro de %d e %d\n", n, dobro(n));
    return 0;
}