#include <stdio.h>

int main() {
	
    int n;
    printf("Enter a five digit number:");
    scanf("%d", &n);
    int a,b,c,d,e,f,g,h,i;
    
    a=n/10000;
    b=n%10000;
    c=b/1000;
    d=b%1000;
    e=d/100;
    f=d%100;
    g=f/10;
    h=f%10;
    i=h/1;
    
    printf("%d\n",a+c+e+g+i);
    return 0;
}
