#include <stdio.h>
int verifc (int num)
{
    if(num > 0)
    {
        return 1;
    }
    else if (num == 0)
    {
    return 0;
    }
    else if(num < 0)
    {
        return -1;
    }
}
int main()
{
    int valor;

    printf("Digite um numero\n");
    scanf("%d", &valor);

    printf("%d\n", verifc(valor));

    return 0;
}