#include <stdio.h>

int main()
{
    int i = 39;
    int *j = &i;

    printf("Value of i %d \n", i);
    printf("Value of i %d \n", *j);
    printf("Value of J %d \n", &(*j));
    printf("Value of J %d \n", j);
    printf("Address of i %u \n", j);
    printf("Address of i %u \n", &(*j));
    printf("Address of i %u \n", &i);
    printf("Address of i %u \n", &i);
    printf("Address of j %u \n", &j);
    
    return 0;
}