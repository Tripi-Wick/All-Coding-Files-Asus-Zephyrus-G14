#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    arr = (int*)malloc(6*sizeof(int));

    arr[1]=123;
    arr[2]=113;
    arr[3]=1223;
    arr[4]=12;
    arr[5]=23;
    arr[6]=13;

    for(int i=0; i<6; i++){
        printf("The value of %d element of array: %d\n",i+1,arr[i]); 
    }

    return 0;
}