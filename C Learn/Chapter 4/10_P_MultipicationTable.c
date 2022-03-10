#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number whose multipaction table you want ");
    scanf("%d",&n);

    int a=1;
    
    do{printf("%d*%d=%d\n",n,a,n*a);a++;}
    while(a<=10);
    
    return 0;
}