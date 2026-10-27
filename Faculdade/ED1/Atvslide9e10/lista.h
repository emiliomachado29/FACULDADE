#ifndef LISTA_H
#define LISTA_H

typedef struct no *Lista;

Lista cria_lista();
int lista_vazia(Lista lst);

/* Operacoes recursivas (lista ordenada crescente) */
int insere_ord(Lista *lst, int elem);
int remove_ord(Lista *lst, int elem);

int tamanho(Lista lst);
int busca(Lista lst, int elem);
void imprime_lista(Lista lst);
void libera_lista(Lista *lst);

#endif
