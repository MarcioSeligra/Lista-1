#include<stdio.h>

void main()
{
    float A,B,AD,S,S2,M,D,D2;

    printf("insira o valor de A: ");
    scanf("%f", &A);

    printf("insira o valor de B: ");
    scanf("%f", &B);

    AD=A+B;
    S=A-B;
    S2=B-A;
    M=A*B;
    D=A/B;
    D2=B/A;

    printf("A mais B:%.2f\n",AD);
    printf("A menos B:%.2f\n",S);
    printf("B menos A:%.2f\n",S2);
    printf("A vezes B:%.2f\n",M);
    printf("A dividido por B:%.2f\n",D);
    printf("B dividido por A:%.2f\n",D2);

}

