#include <stdio.h>

int main()
{
    float prestacao, valor, taxa, tempo;

    printf("Insira o valor da taxa: ");
    scanf("%f", &taxa);

    printf("Insira o valor: ");
    scanf("%f", &valor);

    printf("Insira o valor do tempo: ");
    scanf("%f", &tempo);

    prestacao = valor + (valor * (taxa / 100) * tempo);

    printf("Valor da prestacao: %.2f\n", prestacao);
}
