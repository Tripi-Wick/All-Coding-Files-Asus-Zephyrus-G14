#include <stdio.h>

int main()
{
    int a;

    printf("Enter the amount of natural numbers u want to print in reverse ");
    scanf("%d",&a);

    for(int b=1; a>=b; a--){printf("%d\n",a);}
    return 0;
}