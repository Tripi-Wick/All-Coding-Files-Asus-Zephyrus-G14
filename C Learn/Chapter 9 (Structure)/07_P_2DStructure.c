#include <stdio.h>

typedef struct Two_D_Structure{
    float Real_No;
    float Imaginary_No;
}ComplexNo;

int main()
{
    int i;
    printf("Enter the number of complex number: ");scanf("%d",&i);

    ComplexNo c[i];
    fflush(stdin);

    for(int j=0; j<i; j++){
    printf("Enter the Real Part of %d complex number: ",j+1);scanf("%f",&c[j].Real_No);
    printf("Enter the Imaginary Part of %d complex number: ",j+1);scanf("%f",&c[j].Imaginary_No);
    }


    for(int j=0; j<i; j++){
    printf("The Real Part of %d complex number: %.2f\n",j+1,c[j].Real_No);
    printf("The Imaginary Part of %d complex number: %.2f\n",j+1,c[j].Imaginary_No);
    }


    return 0;
}