#include<stdio.h>

int main()
{
    int SM,PR,NS;

    printf("insira o valor do salario mensal: ");
    scanf("%d", &SM);

     printf("insira o valor do reajuste (em porcentagem): ");
     scanf("%d", &PR);


     NS = SM *(1 + PR / 100.0);

     printf("valor do NS:%d",NS);

}
