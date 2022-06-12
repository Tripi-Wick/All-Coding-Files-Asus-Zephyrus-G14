#include <stdio.h>
void sum(int n);

int main()
{
    int n;

    printf("Enter the numbers till where you want too see the sum "); scanf("%d",&n);
    sum(n);

    return 0;
}

void sum(int n){
    if(n>0){
    static int a=0,b=1,c;
    c=a+b;
    a=c;
    b++;
    sum(n-1);
    if(n==1){printf("%d\n",c);}
    }
}