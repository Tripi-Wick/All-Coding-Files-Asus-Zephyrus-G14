#include <stdio.h>

int main()
{
    int a=1,b;

    printf("Enter a the number of natural numbers you want to print "); scanf("%d",&b);

    do{printf("%d \n",a);a++;}
    while(a<=b);

    return 0;
}