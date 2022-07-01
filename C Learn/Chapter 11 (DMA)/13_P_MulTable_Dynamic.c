#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *mull, *arr;
    mull = calloc(10,sizeof(float));
    arr = malloc(1 * sizeof(float));

    printf("Enter the number whose multiplication table you want to see ");scanf("%f",arr);

    for(int i=0; i<10 ; i++){
        mull[i]=(*arr)*(i+1);
    }

    for(int i=0; i<10 ; i++){
        printf("%.1f x %d = %.1f\n",*arr, i+1,mull[i]);
    }

    mull = realloc(mull, 15*sizeof(float));

    printf("_____________________________________After Reallocation_____________________________________\n");

    for(int i=0; i<15 ; i++){
        mull[i]=(*arr)*(i+1);
    }

    for(int i=0; i<15 ; i++){
        printf("%.1f x %d = %.1f\n",*arr, i+1,mull[i]);
    }

    return 0;
}