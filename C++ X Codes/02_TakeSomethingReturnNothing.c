#include <stdio.h>

void add(int a , int b);

int main()

{
    add(2,3);
    
    return 0;

}

void add(int a , int b)
{
int c=a+b;
printf("%d",c);
}