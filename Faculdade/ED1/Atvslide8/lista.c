#include "lista.h"

struct lista{
    int vet[MAX];
    int fim;
};

lista cria_lista(){
    list lst;
    lst = (lista) malloc(sizeof) (struct lista);
    if(lst != NULL)
        lst -> fim = 0; //Lista vazia

        return lst;
}

int lista_vazia(lista lst){
    if(lst -> fim == 0)
        return 1; //Lista vazia
    else
        return 0; //Lista NÃO vazia
}

int lista_cheia(lista lst){
    if(lst -> fim == MAX)
        return 1; //lista vazia
    else
        return 0; //lista NÃo cheia
}

int insere_elem(lista lst, int elem){
    if(lst = NULL || lista_cheia(lst) == 1)
        return o;

        lst -> no[lst -> fim] = elem; //Insere elemento
        lst -> fim ++; // Avança o fim
        return 1;
}