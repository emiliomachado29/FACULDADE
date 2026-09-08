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

    if(set_value(N1, nu, de) == 0){//Atribui  numerador e o denominador a N1
        printf("\nFalha ao preencher o primeiro racionl.\n");
        return -1;
    }
    printf("\nDigite o numerador e denominador do segundo racional:\n");
    scanf("%d", &nu);
    scanf("%d", &de);

    if(set_value(N2, nu, de) == 0){ //Atribui o numerador e o denominadora N2
    printf("\nFalha ao preencher o segundo racional.\n");
    return -1;
    }
    N3 = sum(N1,N2);//Soma 2 números racionais
    if(N3 == NULL){
     printf("\nFalha ao somar os 2 numeros racionais.\n");
    return -1;
        }
    if(get_value(N3, &nu, &de) == 0){//Obtem o numerador e o denominador de N3
        printf("\nFalha ao recuperar o numerador e denominador resultante. \n");
        return -1;
    }
    printf("\nO resultado da soma eh: %d / %d.\n",nu ,de);
    delete(&N1);
    delete(&N2);
    delete(&N3);
    return 0;
}