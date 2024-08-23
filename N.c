#include<stdio.h>

int main()
{
    int A,B,C,D,E;

    printf("insira o valor de A: ");
    scanf("%d", &A);

    printf("insira o valor de B: ");
    scanf("%d", &B);

    printf("insira o valor de C: ");
    scanf("%d", &C);

    D=A+B+C;
    E=D*D;

    printf("%d", E);
}
