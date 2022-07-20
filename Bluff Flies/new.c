#include <stdio.h>
#include <string.h>

void replace(char s[], char c1, char c2);

int main()
{
    char s[] = "Tracing";
    char c1 ='n', c2 ='c';

    printf("Before Change of Word : %s\n",s);
    replace(s, c1, c2);

    return 0;
}

void replace(char s[], char c1, char c2)
{
    int l = strlen(s);

    for (int i=0; i<l; i++){
        if(s[i]==c1)
        {
            s[i] = c2;
        }
        else if(s[i]==c2)
        {
            s[i] = c1;
        }    
    }
    
    printf("After Change of Word : %s",s);
}
