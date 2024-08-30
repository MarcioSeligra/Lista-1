#include<stdio.h>

void main()
{
    float DISTANCIA,TEMPO,VELOCIDADE;

    printf("valor da distancia em km: ");
    scanf("%f", &DISTANCIA);

    printf("valor do tepo em min: ");
    scanf("%f", &TEMPO);

    VELOCIDADE=(DISTANCIA*1000)/(TEMPO*60);

    printf("velocidade em metros por segundo:%.2f", VELOCIDADE);

}
