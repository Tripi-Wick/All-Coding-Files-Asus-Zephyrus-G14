#include <stdio.h>

int main()
{
    int n=4;
    n-=4;

    do{printf("%d\n",n,n++);}
    while(n<=4);
    
    return 0;
}