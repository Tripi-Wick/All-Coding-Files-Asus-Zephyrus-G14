#include <stdio.h>

typedef struct Vector{
    float x;
    float y;
}Vector;

void Vsum(Vector v1,Vector v2){
    float a,b;
    a=v1.x+v2.x;
    b=v1.y+v2.y;
    printf("Value of sum of vectors is %.1fx+%.1fy",a,b);
}

int main()
{
    Vector v1,v2;
    
    printf("Enter The value of x part of first vector :: ");scanf("%f",&v1.x);
    printf("Enter The value of y part of first vector :: ");scanf("%f",&v1.y);
    printf("Enter The value of x part of Second vector :: ");scanf("%f",&v2.x);
    printf("Enter The value of y part of Second vector :: ");scanf("%f",&v2.y);

    Vsum(v1,v2);

    return 0;
}