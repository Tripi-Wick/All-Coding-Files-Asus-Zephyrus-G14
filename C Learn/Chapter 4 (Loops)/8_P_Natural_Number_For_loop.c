#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number of natural numbers you want to print "); scanf("%d",&a);

    for(int b=1; b<=a; b++){printf("%d\n",b);}

    return 0;
}