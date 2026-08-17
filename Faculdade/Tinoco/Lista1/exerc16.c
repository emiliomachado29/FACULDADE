#include <stdio.h>

void desenha_linha(int n)
{
    for(int i = 0; i < n; i++)
        printf("=");

    printf("\n");
}

int main()
{
    desenha_linha(10);

    return 0;
}