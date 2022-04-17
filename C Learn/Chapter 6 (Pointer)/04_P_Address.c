#include <stdio.h>
void Address(int *a);


int main()
{
    int a=4;

    printf("The value of a is %d\n",a);
    Address(a);
    printf("The adderess of a after calling function is %u\n",&a);
    
    return 0;
}

void Address(int *a)
{
    printf("The address of a is %u\n",&a);
}

// Hence the value of address changes when we pass argument as values