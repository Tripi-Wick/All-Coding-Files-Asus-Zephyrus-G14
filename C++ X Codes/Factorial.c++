#include <stdio.h>

int main()
{
    int n, factorial=1;

    printf("Enter the number whose factorial you wanna get "); scanf("%d",&n);
    printf("%d!= ",n);

    do
    {
    printf("%dx",n);
    n--;
    }
    while(n>0);

    return 0;
}