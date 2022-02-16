#include <stdio.h>
int main()
{
    int a;

    printf("Enter your age "); scanf("%d",&a);

    if(a<70 && a>18)
    {
        printf("You are eligible for driving license");
    }

    else
    {
        printf("You are not eligible for driving");
    }

    return 0;
}
 