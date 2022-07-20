#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of rows and columns of square matrix: ");scanf("%d",&n);
    
    float matrix[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("Enter the element of [%d][%d] matrix element: ",i+1,j+1);scanf("%f",&matrix[i][j]);
        }
    }

    static float sum;
    for(int i=0; i<n; i++){
    sum+=matrix[i][i];
    }

    printf("The Sum Of Elemets of Diagonals is: %.3f",sum);

    return 0;
}