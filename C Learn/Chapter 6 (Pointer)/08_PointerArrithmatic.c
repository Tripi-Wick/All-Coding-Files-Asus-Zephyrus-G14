#include <stdio.h>

int main()
{
    int a= 24;
    int *ptr = &a;

    printf("The Value of pointer before increment %u\n",ptr);
    ptr++;
    printf("The Value of pointer after increment %u\n",ptr);

    // char a= '3';
    // char *ptr = &a;

    // printf("The Value of pointer before increment %u\n",ptr);
    // ptr++;
    // printf("The Value of pointer after increment %u\n",ptr);

    // float a= 3;
    // float *ptr = &a;

    // printf("The Value of pointer before increment %u\n",ptr);
    // ptr++;
    // printf("The Value of pointer after increment %u\n",ptr);


    // in this the pointer wil get incremented by the digits acc to the architecture of the computer as the inter is alloted 4 bits here
    
    return 0;
}