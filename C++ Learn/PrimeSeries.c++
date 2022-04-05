#include <stdio.h>

int main()
{
    int n;

    printf("Enter the amount of prime numbers you wanna see "); scanf("%d",&n);

    for(int b=0,a=1; b!=n; a++,b++)
    {
        printf("%d\n",6*a-1);
    }
    return 0;
}