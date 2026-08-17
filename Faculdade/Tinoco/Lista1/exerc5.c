#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float volume(float raio)
{
  float volume;
  
  volume = (4.0/3.0) * M_PI * pow(raio,3);

  return volume;
}

int main()
{
  float resultado;

  resultado = volume(3);
  
  printf("O volume da esfera e %.2f\n", resultado);

  return 0;
}