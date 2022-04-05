#include <stdio.h>

int main(){

int n,a,b,c,d,e;

printf("Enter a three digit number to check wether its a armstrong number ");scanf("%d",&n);

do{
    a=n%10;

    c += a*a*a;

    n/=10;

    }
    while(n!=0);

    if (c==n){printf("Entered Number is a 3 digit Armstrong number");}
    else {printf("Entered Number is not a 3 digit Armstrong number");}

return 0;
}