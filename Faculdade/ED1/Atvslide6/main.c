#include <stdio.h>
#include "Ponto.h"

int main() {

    Ponto *p1;
    Ponto *p2;

    float x1, y1;
    float x2, y2;
    float distancia;

    printf("Digite as coordenadas do primeiro ponto:\n");

    printf("X: ");
    scanf("%f", &x1);

    printf("Y: ");
    scanf("%f", &y1);

    printf("\nDigite as coordenadas do segundo ponto:\n");

    printf("X: ");
    scanf("%f", &x2);

    printf("Y: ");
    scanf("%f", &y2);

    p1 = cria_ponto(x1, y1);
    p2 = cria_ponto(x2, y2);

    distancia = distancia_ponto(p1, p2);

    printf("\nDistancia entre os pontos: %.2f\n", distancia);

    libera_ponto(&p1);
    libera_ponto(&p2);

    return 0;
}