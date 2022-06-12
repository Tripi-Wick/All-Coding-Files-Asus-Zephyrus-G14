#include <stdio.h>

int main()
{
    char str[]="Tom";
    char *ptr=str;

    while(*ptr!='\0'){printf("My name is %c\n",*ptr);*ptr++;}
    printf("My name is %s\n",str);
    
    return 0;
}