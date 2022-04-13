#include <stdio.h>
int fib(int a);

int main()
{
    int a;
    printf("Enter the number of fibonacci series elements you want to see ");scanf("%d",&a);
    printf("%d",fib(a));
    
    return 0;
}

int fib(int a){
    if(a==0||a==1){return 0;}
    else{return (fib(a-1)+fib(a-2));}   
}

