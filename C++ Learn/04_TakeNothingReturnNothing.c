#include <stdio.h>

void add();

int main()
{
    add();
    
    return 0;
}

void add()
{
    int a=3,b=2;
    int c=a+b;
    printf("%d",c);
}