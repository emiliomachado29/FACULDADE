#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int hipotenusa(int a, int b)
{
    return sqrt(a*a+b*b);
}

int main ()
{
    int a, b;

    printf("Digite o valor de a:");
    scanf("%d", &a);

    printf("Digite o valor de b:");
    scanf("%d", &b);

    printf("A hipotenusa e: %d\n", hipotenusa(a, b) );

    return 0;
}