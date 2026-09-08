#include <stdio.h>

void data(int dia, int mes, int ano)
{
    char matriz[12][20] = 
        {"Janeiro",
        "Fevereiro",
        "Marco",
        "Abril",
        "Maio",
        "Junho",
        "Julho",
        "Agosto",
        "Setembro",
        "Outubro",
        "Novembro",
        "Dezembro"};


    printf("%d de %s de %d\n", dia, matriz[mes - 1], ano);

    
}

int main (){

    int dia, mes, ano;

    printf("Digite a data: (** ** ****)\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    data(dia, mes, ano);

    return 0;

}