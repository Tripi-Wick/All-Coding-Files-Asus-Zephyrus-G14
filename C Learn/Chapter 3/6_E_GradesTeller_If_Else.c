#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks "); scanf("%d",&marks);

    if(marks<=100 && marks>=90) {printf("Your grade is A");}
    else if(marks<=89 && marks>=80) {printf("Your grade is B");}
    else if(marks<=79 && marks>=70) {printf("Your grade is C");}
    else if(marks<=69 && marks>=60) {printf("Your grade is D");}
    else if(marks<=59 && marks>=50) {printf("Your grade is E");}
    else if(marks<=49 && marks>=0) {printf("Your grade is F");}
    else {printf("You have entered invalid marks");} 
       
    return 0;
}