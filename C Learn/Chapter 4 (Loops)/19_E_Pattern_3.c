#include <stdio.h>

int main()

{
    int n;

    printf("Enter the number of lies of pattern you want to see: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n; i != j; j--)
        {
            printf("%d", n - j + 1);
        }
        printf("\n");
    }
    return 0;
}