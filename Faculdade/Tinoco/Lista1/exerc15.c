#include <stdio.h>

int formaTriangulo(float a, float b, float c)
{
    return (a < b + c && b < a + c && c < a + b);
}

void tipoTriangulo(float a, float b, float c)
{
    if(a == b && b == c)
        printf("Equilatero");
    else if(a == b || a == c || b == c)
        printf("Isosceles");
    else
        printf("Escaleno");
}

int main()
{
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if(formaTriangulo(a,b,c))
        tipoTriangulo(a,b,c);
    else
        printf("Nao forma triangulo");

    return 0;
}