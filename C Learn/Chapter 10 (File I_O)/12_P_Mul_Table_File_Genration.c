#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("13_E_Mul Table.txt", "w");

    int n;

    printf("Enter the number whose multiplication table you want to see in the file:- ");scanf("%d",&n);

    for(int i=0; i<10; i++){
        fprintf(fptr, "%d X %d = %d\n",n,i+1,n*(i+1));
    }

    fclose(fptr);

    printf("Successfully Generated the table of %d in file 13_E_Mul Table.txt",n);

    return 0;
}