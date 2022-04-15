#include <stdio.h>

float temp(float a);

int main()
{
    float a;
    printf("Enter the temperature in celsius "); scanf("%f",&a);
    printf("So THe temperature in Fahrenheit is %f",temp(a));

    return 0;
}

float temp(float a){
    float b;
    b=a*1.8 + 32;
    return b;
}