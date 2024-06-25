#include<stdio.h>

void main()
{
   float r,d,c;
   
   printf("quantos reais você tem: ");
   scanf("%f",&r);
   
   printf("qual o valor do dolar: ");
   scanf("%f",&c);
   
   d=r/c;
   
   printf("você tem %.3f dolares",d);
}
