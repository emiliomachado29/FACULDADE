#include <stdio.h>
#include "conversor.h"

int main()
{   
    int opcao;
    float temp;

    do 
    {
    printf("MENU\n1 - Converter Celsius -> Fahrenheit\n2 - Converter Fahrenheit -> Celsius\n0 - Sair\n");
    scanf("%d", &opcao);

    printf("Digite o valor da temperatura\n");
    scanf("%d", temp);

        switch(opcao)
        {
            case 1 :
                printf("O resultado da transformação é:%.2f", celsius_fahrenheit(temp));
                break;

            case 2 :
                printf("O resultado da transformação é:%.2f", fahrenheit_celsius(temp)); 
               break;

            default :
            printf("Opcao de MENU invalida!");
        }
    } while( opcao != 0);

    return 0;
}