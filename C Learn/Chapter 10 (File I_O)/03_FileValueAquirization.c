#include <stdio.h>

int main()
{
    int num1,num2;

    FILE *ptr;
    ptr = fopen("01_E_Example File.txt", "r");

    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    
    printf("%d\n",num1);
    printf("%d",num2);\

    fclose(ptr);

    return 0;
}