#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100], s3[100];
    int p;

    printf("Enter the Main string\n");
    gets(s1);
    printf("Enter the string you want to insert in main string\n");
    gets(s2);
    printf("Enter the Postion of element in main string after which you want to insert this string\n");
    scanf("%d", &p);

    char *ptr1, *ptr2, *ptr3;
    ptr1 = &s1[0];
    ptr2 = &s2[0];
    ptr3 = &s3[0];

    for (int i = 0; i < p; i++)
    {
        *ptr3 = *ptr1;
        ptr1++;
        ptr3++;
    }

    while (*ptr2 != '\0')
    {
        *ptr3 = *ptr2;
        ptr2++;
        ptr3++;
    }
    while (*ptr1 != '\0')
    {
        *ptr3 = *ptr1;
        ptr1++;
        ptr3++;
    }

    *ptr3 = '\0';

    printf("So the final string is : ");

    printf("%s", s3);
    
    return 0;
}