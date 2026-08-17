#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volumec(float a,float r)
{   
    float result;
    float pi = 3.141592;

    result = (pi * pow(r,2) * a);
    return  result;
}

int main()
{
    float a, r, v;

    printf("Digite a altura e o raio: \n");
    scanf("%f %f",&a,&r);

    v = volumec(a,r);

    printf("Volume do cilindro circular : %.2f\n", v);

    return 0;
}