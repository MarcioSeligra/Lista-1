#include <stdio.h>

float main()
{
    float a, b,c;

    printf("digite o valor de a: ");
    scanf("%f",&a);

    printf("digite o valor de b: ");
    scanf("%f",&b);

    c=b;
    b=a;;
    a=c;

    printf("a:%f;b:%f",a,b);


}
