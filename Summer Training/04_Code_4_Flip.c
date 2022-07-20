#include <stdio.h>

flip(int *, int);
void swap(char *, char *);

int main()
{
    int n2;
    char n1[100];
    printf("Enter a number :: ");
    scanf("%s", &n1);
    printf("Enter the number after which you want to flip the digits :: ");
    scanf("%d", &n2);
    printf("************Number Before FLip************\n");
    printf("%s", n1);
    flip(n1, n2);

    return 0;
}

flip(int *ptr, int x)
{
    for (int i = 0; i < x; i++)
    {
        ptr++;
    }
    while(*ptr)
}

void swap(char *ptr1, char *ptr2)
{
    char temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}