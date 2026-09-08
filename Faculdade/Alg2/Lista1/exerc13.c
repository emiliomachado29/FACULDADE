#include <stdio.h>

float calcula(float a, float b, char op)
{
    switch(op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default:
            printf("Operacao invalida!");
            return 0;
    }
}

int main()
{
    float x, y;
    char op;

    scanf("%f %c %f", &x, &op, &y);

    printf("Resultado = %.2f", calcula(x, y, op));

    return 0;
}