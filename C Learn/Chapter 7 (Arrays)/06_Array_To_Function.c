#include <stdio.h>
void PrintArray(int a, int *b);

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    PrintArray(7,arr);
    return 0;
}

void PrintArray(int a, int *b){
    for(int c=0;c<a;c++){
    printf("The value of %d Array is %d\n",c+1,*(b+c));
}
}