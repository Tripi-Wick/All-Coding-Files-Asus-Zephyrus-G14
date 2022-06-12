#include <stdio.h>

typedef struct Complex_Number{
    float real;
    float imaginary;
}cxp;

void display(cxp *ptr ){
    for(int i=0;i<5;i++){
        printf("The Real part of Complex Number %d is: %.1f\n",i+1,ptr->real);
        printf("The Imaginary part of Complex Number %d is: %.1f\n",i+1,ptr->imaginary);
        ptr++;
    }
}

int main()
{
    cxp c[5];

    for (int i=0; i<5; i++){
        printf("Enter the real part of %d complex number: ",i+1);scanf("%f",&c[i].real);
        printf("Enter the imaginary part of %d complex number: ",i+1);scanf("%f",&c[i].imaginary);
    }
    
    display(&c);
    
    return 0;
}