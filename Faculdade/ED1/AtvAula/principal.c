#include <stdio.h>
#include "racional.h"
int main(){
    Racional *N1, *N2, *N3;
    int nu, de;
    N1 = generate(); //Cria 2 números racionais
    N2 = generate();
    if(N1 == NULL || N2 == NULL){
        printf("Nao foi possivel criar os nros racionais.\n");
        return -1;
    }
    printf("Digite o numerador e denominador do primeiro racional:\n");
    scanf("%d", &nu);
    scanf("%d", &de);

    if(set_value(N1, nu, de) == 0) //Atribui  numerador e o denominador a N!
}