#include <stdio.h>
#include<string.h>

int main()
{
    char str1[]="Help";
    char str2[]="Hello";
    
    int val=strcmp(str1,str2);
    printf("The Val is :%d",val);
    
    return 0;
}