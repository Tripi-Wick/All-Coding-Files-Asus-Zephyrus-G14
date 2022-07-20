#include <stdio.h>

void swap(int* ,int*);

int main()
{
    int i;

    printf("Enter the number of elements in array: "); scanf("%d",&i);

    int arr[i];
    
    for(int a=0; a<i; a++){
        printf("Enter the %d element of arr: ",a+1);
        scanf("%d",&arr[a]);
    }

    printf("\n");

    printf("*****************Reversed Array*********************\n\n");

    int b=i-1;
    
        for(int a=0; a<i/2; a++){
        swap(&arr[a],&arr[b]);
        b--;
        }

    for(int a=0; a<i; a++){
        printf("%d ",arr[a]);
    }
   

    return 0;
}

void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}