#include <stdio.h>
void count(int*,int);

int main()
{
    int a;
    printf("Enter the number of elements of Array ");scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++){
        printf("Enter the element number %d:: ",i);
        scanf("%d",&arr[i]);
    }
    count(&arr[0],a);
    return 0;
}

void count(int *a,int b)
{

    int n=0;
    for(int i=0;i<b;i++)
    {
        if(*a>=0){n++;}
        a++;
    }
    printf("The value of positive values in array is %d",n);
}