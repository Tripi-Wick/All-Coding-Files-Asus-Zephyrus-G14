#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number whose multiplication table is required in reversed order ");
    scanf("%d",&n);

    int a=10;

    while(a>0){printf("%d*%d=%d\n",n,a,n*a);a--;}

    return 0;
}