#include<stdio.h>

int main()
{
    int n=5;
    
    for ( int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i>=j && i%2==1)
            printf("*"); 
        }
        if( i%2 ==1 ) printf("\n");
    }
    
}


#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%i", &n);
    for(int i=0;i<n;i++)
    {
        for( int j=i;j>=0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}