#include "conversor.h"

float celsius_fahrenheit(float c)
{   
    float F = 0;
    F = c * (9/5) + 32;
    return F;
}

float fahrenheit_celsius(float f)
{
    float C = 0;
    C = ((f - 32) * 5)/9;
    return C;
}