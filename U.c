#include<stdio.h>

void main()
{
    float v,r;

    printf("raio da esfera: ");
    scanf("%f", &r);

    v=(4/3)*3.14159*(r*r*r);

    printf("volume total da esfera:%.2f", v);

}
