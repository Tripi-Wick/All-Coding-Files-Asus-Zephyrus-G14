#include <stdio.h>

PrintArray(int ,int *);

int main()
{
    int arr[2][3];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Enter the number of marks of %d student in %d subject: \n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    PrintArray(4,&arr[0][0]);

   return 0;
}

PrintArray(int s, int *d){

for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("{%d,%d}\n",j+1,*d);
            d++;
        }
    }

}