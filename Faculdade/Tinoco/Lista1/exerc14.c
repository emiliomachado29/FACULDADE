#include <stdio.h>

void consumo(float km, float litros)
{
    float media = km / litros;

    printf("Consumo: %.2f km/l\n", media);

    if(media < 8)
        printf("Venda o carro!");
    else if(media <= 14)
        printf("Economico!");
    else
        printf("Super economico!");
}

int main()
{
    float km, litros;

    scanf("%f %f", &km, &litros);

    consumo(km, litros);

    return 0;
}