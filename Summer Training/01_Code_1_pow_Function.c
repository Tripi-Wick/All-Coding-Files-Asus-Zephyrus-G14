#include <stdio.h>

float power(float , int);

int main()
{
    float x,z;

    int y;

    printf("Enter a number: ");scanf("%f",&x);

    printf("Enter the power to which you want to raise this number: ");scanf("%d",&y);

    z=power(x,y);

    printf("So the value of the '%.3f' raised to the power '%d' is: %.3f",x,y,z);
    
    return 0;
}

float power(float a, int b){
    static float c=1;
    c*=a;
    b--;
    if(b>0){power(a,b);}
    return c ;
} 