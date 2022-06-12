#include <stdio.h>

int main()
{
    int arr[2][3][4];
    int i=0;
    int *ptr;
    ptr=&arr[0][0][0];

    for(int a=0; a<2; a++)
    {
        for(int b=0; b<3; b++)
        {
            for(int c=0; c<4; c++)
            {
                printf("THE address of arr[%d][%d][%d]=%u\n",a,b,c,&arr[a][b][c]);
            }
        }
    }

    return 0;
}