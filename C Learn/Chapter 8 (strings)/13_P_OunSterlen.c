#include <stdio.h>
int Count(char*);

int main()
{
    char str[]="Trishan";
    char *ptr=str;

    printf("The length of string is %d",Count(ptr));

    return 0;
}

int Count(char *a){
    static int i=0;

    while(*a!='\0'){
        i++;
        *a++;
    }
    
    return i;
}
