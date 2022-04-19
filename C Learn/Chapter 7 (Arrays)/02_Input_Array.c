#include <stdio.h>

int main()
{
    int Marks[4];

    printf("Enter the number of 1st student: ");scanf("%d",&Marks[0]);
    printf("Enter the number of 2st student: ");scanf("%d",&Marks[1]);
    printf("Enter the number of 3st student: ");scanf("%d",&Marks[2]);
    printf("Enter the number of 4st student: ");scanf("%d",&Marks[3]);

    printf("The marks of students are %d,%d,%d,%d",Marks[0],Marks[1],Marks[2],Marks[3]);
    return 0;
}