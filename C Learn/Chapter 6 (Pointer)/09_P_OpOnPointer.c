#include <stdio.h>

int main()
{
    int a=9,b=10;
    int *ptr1=&a;
    int *ptr2=&a;
    int *ptr3=&b;
    int array[]={1,3};
    int *ptr4=&array[0];
    int *ptr5=&array[1];
    int *ptr6;
// // Addition of a number to a pointer

//     printf("The value of pointer before addition %u\n",ptr1);
//     ptr1= ptr1 + 1;
//     printf("The value of pointer after addition %u\n",ptr1);

// // Subtraction of a number from pointer

//     printf("The value of pointer before Subtraction %u\n",ptr1);
//     ptr1= ptr1 - 1;
//     printf("The value of pointer after Subtraction %u\n",ptr1);

// // Subtraction of a Pointer from Pointer

    // ptr6 = ptr5 - ptr4;
    // printf("So the value of pointer is %u\n",ptr6);

// Comparision of a pointer

    if(ptr1==ptr2){printf("Pointer indicate to same address");}
    else{printf("Pointer does not indicate to same address");}

    return 0;
}