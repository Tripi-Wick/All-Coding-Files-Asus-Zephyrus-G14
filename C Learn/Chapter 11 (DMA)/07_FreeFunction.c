#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,*ptr2;

    ptr = (int*)calloc(100, sizeof(int));

    for(int i=0; i<100; i++){
        ptr2 = (int*)calloc(600000000, sizeof(int));
        printf("Enter value number %d= ",i+1);scanf("%d",&ptr[i]); 
        free(ptr2);
    }

    for(int i=0; i<100; i++){
        printf("The value number %d = %d\n",i+1,ptr[i]); 
    }

    return 0;
}