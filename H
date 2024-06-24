#include <stdio.h>

int main()
{
    float volume,altura,largura,comprimento;

    printf("Insira o valor da largura: ");
    scanf("%f", &largura);

    printf("Insira o valor da altura: ");
    scanf("%f", &altura);

    printf("Insira o valor do comprimento: ");
    scanf("%f", &comprimento);

    volume=comprimento*largura*altura;

    printf("Valor do volume: %.2f\n", volume);
}
