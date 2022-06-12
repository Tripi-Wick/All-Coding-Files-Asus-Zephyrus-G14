#include <stdio.h>

char CopyString(char* target ,char* source);

int main()
{
    char str1[]="trippi";
    char str2[]="Tripi Wick";

    printf("Value of str1 before using cpy is %s\n",str1);
    CopyString(str2 , str1);
    printf("Value of str2 after using cpy is %s\n",str1);


    return 0;
}
char CopyString(char* target ,char* source){

    int i=0;
    while(source<'\0'){
        target[i]=source[i];
        printf("%s",target);
        i++;
    }
    target[i]='\0';
}