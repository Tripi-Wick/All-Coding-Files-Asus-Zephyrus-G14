#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 Numbers: ");
    for(int a=0;a<10;a++){scanf("%d",&arr[a]);}

    int *ptr;
    ptr=&arr[0];

    printf("The value of 3rd element of array is %d\n",arr[2]);
    printf("The value of 3rd element of array by pointer is %d\n",*ptr+2);

    if(*ptr+2==arr[2]){printf("Yes the pointer is pointing to the third element of Array");}
    else{printf("No our code is wrong");}

    return 0;
}