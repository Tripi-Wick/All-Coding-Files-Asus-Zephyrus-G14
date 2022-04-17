#include <stdio.h>

int main()
{
    int i = 5;
    int *a = &i;
    int **b = &*a;

    printf("The Value of variable i is %u",&**b);
    
    return 0;
}