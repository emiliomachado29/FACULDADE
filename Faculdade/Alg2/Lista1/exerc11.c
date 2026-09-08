#include <stdio.h>
#include <stdlib.h>

float calcularMedia(float n1, float n2, float n3, char letra)
{
    if (letra == 'A' || letra == 'a')
    {
        return (n1 + n2 + n3) / 3;
    }
    else if (letra == 'P' || letra == 'p')
    {
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    }
    
    return -1;
}

int main()
{
    float nota1, nota2, nota3, media;
    char tipo;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite A para media aritmetica ou P para media ponderada: ");
    scanf(" %c", &tipo);

    media = calcularMedia(nota1, nota2, nota3, tipo);

    if (media != -1)
        printf("Media = %.2f\n", media);
    else
        printf("Tipo de media invalido!\n");

    return 0;
}