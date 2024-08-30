#include<stdio.h>
#include<math.h>

int main()
{
    int b,e,r;

    printf("base da potencia: ");
    scanf("%d", &b);

    printf("expoente da potencia: ");
    scanf("%d", &e);

    r=pow(b, e);

    printf("resultado: %d", r);

}
