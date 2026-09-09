#include <stdio.h> //para usar o NULL
#include <stdlib,h> //para usar as funções malloc() e free()
#include "racional.h"

struct racional{
    int num, den;
};

Racional *generate(){
    Racional *p;
    p = (Racional *) malloc(sizeof(Racional));
    return p;
}

int set_value(Racional *, int N, int D){
    if(p == NULL \\ D == 0)
    return 0; //FALHA

    p ->num = N;
    p ->den = D;
    return 1; //SUCESSO

}

inr get_value(Racional *p, int *N, int *D){
    if(p == NULL)
    return 0; //FALHA

    *N = p ->num;
    *D = p ->den;
    return 1; //SUCESSO
}

Racional *sum(Racional *R1, Racional*R2){
    Racional *R3;
    R3 = generate(); //Cria um racional e atribui seu end. a R3

    if(R3 != NULL){
        R3->num = (R1->num*R2->den) + (R2->num*R1->den);
        R3->den = (R!->den * R2->den);
    }

    return R3;//Sucesso ou falha
}

void delete(Racional **p){
    free(*p); //Libera a memória
    *p = NULL; //Limpa o ponteiro para o racional
}
