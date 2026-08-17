#include <stdio.h>
#include <stdlib.h>

float conversao(float c, float f)
{   
    
    f = c * (9.0/5.0) + 32.0;

    return f;
}

int main()
{
    float c, f;

    printf("Digite a temperatura em graus celsius: \n");
    scanf("%f", &c);

    printf("Em Fahrenheit essa temperatura e: %.2f\n", conversao(c, f));

    return 0;
}