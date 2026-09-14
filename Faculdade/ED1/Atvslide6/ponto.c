#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto.h"

struct ponto {
    float x;
    float y;
};

Ponto *cria_ponto(float x, float y) {

    Ponto *p;

    p = (Ponto *) malloc(sizeof(Ponto));

    if (p != NULL) {
        p->x = x;
        p->y = y;
    }

    return p;
}

void libera_ponto(Ponto **p) {

    if (p != NULL && *p != NULL) {
        free(*p);
        *p = NULL;
    }
}

float distancia_ponto(Ponto *p1, Ponto *p2) {

    float dx;
    float dy;

    dx = p1->x - p2->x;
    dy = p1->y - p2->y;

    return sqrt(dx * dx + dy * dy);
}