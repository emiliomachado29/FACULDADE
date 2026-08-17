#include <stdio.h>
#include "pessoa.h"

int main() {
    char nome[50];
    int idade;
    Pessoa pessoa;

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o '\n' que o fgets armazena
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite a idade: ");
    scanf("%d", &idade);

    pessoa = criarPessoa(nome, idade);

    mostrarPessoa(pessoa);

    return 0;
}