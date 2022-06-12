#include <stdio.h>
#include <string.h>
struct Stud {
    char name[20];
    int class; 
    int roll;
};

int main()
{
    int i;
    printf("Enter the number of students: ");scanf("%d",&i);
    struct Stud num[i];
    fflush(stdin);

    for(int a=0; a<i; a++){
        printf("Enter the name of student %d: ",a+1);gets(num[a].name);fflush(stdin);
        printf("Enter the class of student %d: ",a+1);scanf("%d",&num[a].class);fflush(stdin);
        printf("Enter the roll number of student %d: ",a+1);scanf("%d",&num[a].roll);fflush(stdin);
    }

       
    for(int a=0; a<i; a++){
        printf("The name of student %d: ",a+1);puts(num[a].name);
        printf("The class of student %d: %d\n",a+1,num[a].class);
        printf("The roll number of student %d: %d\n",a+1,num[a].roll);
    }

       
    return 0;
}