#include <stdio.h>

int main()
{
    int num;

    printf("Enter value of num "); scanf("%d",&num);
    
    (num<2) ? printf("Not a Prime Number nor Composite Number") : printf("The number can be Prime or Composite Number"); 
     
    return 0;
}