#include <stdio.h>

int main()
{
    char str[]={'T','r','i','s','h','a','n','\0'};
    //  char str[]="Trishan";

    char *ptr = str;

    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
        }
    
    return 0;
}