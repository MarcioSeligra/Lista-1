#include<stdio.h>

void main()
{
    float a,b;

    printf("escreva um valor em pes: ");
    scanf("%f",&a);

    b = 0.3048*a;

    printf("valor em metros: %.2f", b);
}
