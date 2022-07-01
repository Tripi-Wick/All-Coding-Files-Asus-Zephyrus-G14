#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("18_E_Generated File 4.txt", "w");

    int a,b;
    char c[10],d[10];

    printf("Enter the salary of two employees ");scanf("%d %d",&a,&b);
    fflush(stdin);
    printf("Enter the name of two employees ");gets(c);gets(d);

    fprintf(fptr,"%s,%d\n%s,%d",c,a,d,b);


    return 0;
}
