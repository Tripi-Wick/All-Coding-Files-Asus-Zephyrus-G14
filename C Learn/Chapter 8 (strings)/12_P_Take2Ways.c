#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10];
    char str2[10];
    char c;
    int i=0;

    printf("Enter 10 characters \n");
    scanf("%s",str1);

    printf("Enter 10 characters character by characters \n");

    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    str2[i-1]='\0';

    printf("Value of String 1 is ");puts(str1);
    printf("Value of String 2 is ");puts(str2);

    printf("strcmp for these strings return %d",strcmp(str1,str2));

    return 0;;

}