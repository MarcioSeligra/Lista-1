#include<stdio.h>

int main()
{
    int A,B,C,N,W,VV,E,PV,PVA,PVB,PVC,PVN,PVW;

    printf("numero de votos para o candidato A: ");
    scanf("%d", &A);


    printf("numero de votos para o candidato B: ");
    scanf("%d", &B);


    printf("numero de votos para o candidato C: ");
    scanf("%d", &C);


    printf("numero de votos nulos: ");
    scanf("%d", &N);


    printf("numero de votos em branco: ");
    scanf("%d", &W);

    VV=A+B+C;
    E=VV+N+W;
    PV=VV*(1+E/100.0);
    PVA=A*(1+E/100.0);
    PVB=B*(1+E/100.0);
    PVC=C*(1+E/100.0);
    PVN=N*(1+E/100.0);
    PVW=W*(1+E/100.0);

    printf("total de votos validos:%d\n",VV);
    printf("total de eleitores:%d\n",E);
    printf("porcentagem de votos validos:%d\n",PV);
    printf("porcentagem de votos do candidato A:%d\n",PVA);
    printf("porcentagem de votos do candidato B:%d\n",PVB);
    printf("porcentagem de votos do candidato C:%d\n",PVC);
    printf("porcentagem de votos nulos:%d\n",PVN);
    printf("porcentagem de votos em brancos:%d",PVW);
}



