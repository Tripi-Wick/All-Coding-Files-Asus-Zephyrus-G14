#include <stdio.h>
int avg(int a,int b,int c);

int main()
{
    int a,b,c;
    printf("Enter three numbers whose average you want to see ");scanf("%d %d %d",&a,&b,&c);
    
    printf("The value of average is %d",avg(a,b,c));
    
    return 0;
}

int avg(int a,int b,int c){
    int d,e;
    d=a+b+c;
    e=d/3;
    return e;
}