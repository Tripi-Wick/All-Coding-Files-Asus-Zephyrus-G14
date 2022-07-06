#include <stdio.h>

int add(int a , int b);

int main()

{
    printf("%d",add(2,3));
    
    return 0;

}

int add(int a , int b)
{
int c=a+b;
return c;
}