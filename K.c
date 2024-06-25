#include<stdio.h>

void main()
{
   float r,d,c;
   
   printf("quantos dolares você tem: ");
   scanf("%f",&d);
   
   printf("qual o valor do dolar: ");
   scanf("%f",&c);
   
   r=c*d;
   
   printf("você tem %.3f reais",r);
}
