#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;

    ptr = (float*)malloc(6 * sizeof(float));

    for(int i=0; i<6; i++){
        printf("Enter value number %d = ",i+1);scanf("%f",&ptr[i]); 
    }

    for(int i=0; i<6; i++){
        printf("The value number %d = %.1f\n",i+1,ptr[i]); 
    }

    return 0;
}
