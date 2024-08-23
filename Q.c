#include<stdio.h>

void main()
{
    float A,R;

    printf("insira o valor do raio: ");
    scanf("%f", &R);

    A = 3.14159265 * (R*R);

    printf("valor da circunferencia:%f",A);
}

