#include <stdio.h>

long int potencia(int x, int z)
{
    long int resultado = 1;

    for(int i = 0; i < z; i++)
        resultado *= x;

    return resultado;
}

int main()
{
    int x, z;

    scanf("%d %d", &x, &z);

    printf("%ld", potencia(x,z));

    return 0;
}