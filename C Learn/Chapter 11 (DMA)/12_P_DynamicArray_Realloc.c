#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    arr = (int*)malloc(6*sizeof(int));

    for(int i=0; i<6; i++){
        printf("Enter value of %d element of array:  ",i+1); scanf("%d",&arr[i]);
    }

    for(int i=0; i<6; i++){
        printf("The value of %d element of array: %d\n",i+1,arr[i]); 
    }

    realloc(arr, 10*sizeof(int));

    printf("After allocation------------------\n");

    for(int i=0; i<10; i++){
        printf("Enter value of %d element of array:  ",i+1); scanf("%d",&arr[i]);
    }

    for(int i=0; i<10; i++){
        printf("The value of %d element of array: %d\n",i+1,arr[i]); 
    }

    return 0;
}