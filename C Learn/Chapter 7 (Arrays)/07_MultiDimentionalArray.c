#include <stdio.h>

int main()
{
    int arr[2][3];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Enter the number of marks of %d student in %d subject: \n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("The number of marks of %d student in %d subject:%d \n",i+1,j+1,arr[i][j]);
        }
    }
    return 0;
}