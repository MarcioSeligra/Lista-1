#include<stdio.h>

void main()
{
    float A,B,C,N,W,VV,E,PV,PVA,PVB,PVC,PVN,PVW;

    printf("numero de votos para o candidato A: ");
    scanf("%f", &A);


    printf("numero de votos para o candidato B: ");
    scanf("%f", &B);


    printf("numero de votos para o candidato C: ");
    scanf("%f", &C);


    printf("numero de votos nulos: ");
    scanf("%f", &N);


    printf("numero de votos em branco: ");
    scanf("%f", &W);

    VV=A+B+C;
    E=VV+N+W;
    PV=(VV*100/E);
    PVA=(A*100/E);
    PVB=(B*100/E);
    PVC=(C*100/E);
    PVN=(N*100/E);
    PVW=(W*100/E);

    printf("total de votos validos:%.2f\n",VV);
    printf("total de eleitores:%.2f\n",E);
    printf("porcentagem de votos validos:%.2f\n",PV);
    printf("porcentagem de votos do candidato A:%.2f\n",PVA);
    printf("porcentagem de votos do candidato B:%.2f\n",PVB);
    printf("porcentagem de votos do candidato C:%.2f\n",PVC);
    printf("porcentagem de votos nulos:%.2f\n",PVN);
    printf("porcentagem de votos em brancos:%.2f",PVW);
}




