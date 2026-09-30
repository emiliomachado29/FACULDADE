typedef struct lista *Lista;

Lista criar_lista();
int lista_vazia(Lista l);
int lista_cheia(Lista l);
int insere_ord(Lista l, int elem);
int remove_ord(Lista l, int elem);
int obtem_valor_elem(Lista l, int pos, int *elem);
void imprime_lista(Lista l);
