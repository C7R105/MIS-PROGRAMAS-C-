#include <stdio.h>
#include <math.h>

int main()
{
    float A, pi=3.14159;
    float radio;

    scanf("%f", &radio);

    A=pi*(pow(radio,2));

    printf("A= %.4f", A);
    printf("\n");
}


