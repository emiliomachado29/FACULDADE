typedef struct lista *Lista;

typedef struct {
    char nome[20];
    int volume;
    float preco;
} Bebida;

Lista criar_lista();
int lista_vazia(Lista l);
int lista_cheia(Lista l);
int insere_bebida(Lista l, Bebida bebida);
int remove_ultimo(Lista l);
void imprime_tabela(Lista l);
