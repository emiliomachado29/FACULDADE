#include <stdio.h>
#include <stdlib.h>

int horas(int h, int m, int s)
{
    m = (h * 60) + m;
    s = s + (m * 60);

    return s;

}

int main ()
{
    int h, m, s;

    printf("Digite a horas: (horas,minutos e segundos)\n");
    scanf("%d %d %d",&h,&m,&s);

    printf("%d", horas( h, m, s));

}