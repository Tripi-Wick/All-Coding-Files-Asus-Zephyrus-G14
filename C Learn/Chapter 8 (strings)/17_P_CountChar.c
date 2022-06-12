#include <stdio.h>

int occurrence(char*,char);

int main()
{
    char ram[]="My name is Ram";
    int r = occurrence(ram ,'a');
    printf("The number of 'a' used is %d",r);
    return 0;
}

int occurrence(char *ptr, char c){
    int j=0;
    while(*ptr!='\0'){
        if(*ptr==c){j++;}
        ptr++;
    }

    return j;
}