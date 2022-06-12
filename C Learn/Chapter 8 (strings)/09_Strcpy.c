#include <stdio.h>
#include <string.h>

int main()
{
    char source[]="Duck";
    char target[10];

    strcpy(target,source);

    printf("Now the target is %s",target);
    return 0;
}