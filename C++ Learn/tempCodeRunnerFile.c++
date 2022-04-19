#include <stdio.h>

int main()
{
    float num1,num2,num3;

    printf("Enter the 1st numbers "); scanf("%f",&num1);
    printf("Enter the 2nd numbers "); scanf("%f",&num2);
    printf("Enter the 3rd numbers "); scanf("%f",&num3);

    
    if(num1>num2 && num1>num3){printf("%f is the greatest number",num1);}
    if(num2>num3 && num2>num1){printf("%f is the greatest number",num2);}
    if(num3>num1 && num3>num2){printf("%f is the greatest number",num3);}
    

    return 0;
}