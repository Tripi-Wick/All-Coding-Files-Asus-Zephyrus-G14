#include <stdio.h>
void check(char*, char);

int main()
{
    char sar[]="My name is Shaktiman";
    char z;

    printf("Enter the char to be checked in the string ");scanf("%c",&z);
    
    check(sar,z);

    return 0;
}

void check(char *ptr, char w){
    while(*ptr!='\0'){
        if(*ptr==w){printf("Yes the given char is present in string");break;}
        ptr++;
    }
    if(*ptr=='\0'){printf("The given char is not present in the string");}
}