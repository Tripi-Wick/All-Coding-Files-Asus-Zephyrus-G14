#include <stdio.h>

int main()
{
    int a=0,b=1,c,n=0;

    printf("0\n");
    printf("1\n");
    

    do
    {
      printf("%d\n",c=a+b);
      a=b;
      b=c;
      n++;
    }       
    while(n!=7);
    
}