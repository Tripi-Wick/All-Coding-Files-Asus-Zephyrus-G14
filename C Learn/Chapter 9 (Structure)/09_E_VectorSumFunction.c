// Te Better Way

#include <stdio.h>

struct Vector{
    float x;
    float y;
};

struct Vector Vsum(struct Vector v1,struct Vector v2){
    struct Vector result;

    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;

    return result;
}

int main()
{
    struct Vector v1,v2,sum;
    
    printf("Enter The value of x part of first Vector :: ");scanf("%f",&v1.x);
    printf("Enter The value of y part of first Vector :: ");scanf("%f",&v1.y);
    printf("Enter The value of x part of Second Vector :: ");scanf("%f",&v2.x);
    printf("Enter The value of y part of Second Vector :: ");scanf("%f",&v2.y);

    sum=Vsum(v1,v2);

    printf("Vector sum result is :: %.1fx+%.1fy",sum.x,sum.y);

    return 0;
}