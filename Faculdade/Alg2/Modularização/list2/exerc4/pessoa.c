#include <stdio.h>
#include <string.h>
#include "pessoa.h"

Pessoa criarPessoa(char nome[], int idade) {
    Pessoa p;

    strcpy(p.nome, nome);
    p.idade = idade;

    return p;
}

void mostrarPessoa(Pessoa p) {
    printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d anos\n", p.idade);
}