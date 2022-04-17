#include <stdio.h>

int main()
{
    int a=4;
    int *b=&a;

    printf("The Value a is %d\n",a);
    printf("The Value *b is %d\n",&a);
    printf("The Address of a is %u\n",&(*b));
    printf("The Address of b is %u\n",&b);
    return 0;
}