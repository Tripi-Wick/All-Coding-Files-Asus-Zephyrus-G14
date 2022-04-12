#include <stdio.h>

int main()
{
    int a,b=0,c=1,d,n=0;
    printf("Enter the number of fibonacci series elements you want to see ");scanf("%d",&a);
    do{
        d=b+c;
        b=c;
        c=d; 
        n++; 
        printf("%d,",d);
    }
    while(n!=a);
      
    return 0;
}
