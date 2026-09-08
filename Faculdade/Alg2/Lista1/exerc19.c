#include <stdio.h>

long int fatorial(int n)
{
    long int fat = 1;

    for(int i = 1; i <= n; i++)
        fat *= i;

    return fat;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%ld", fatorial(n));

    return 0;
}