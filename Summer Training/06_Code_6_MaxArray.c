#include <stdio.h>

int max (int *,int);

int main()
{
    int n,ans;
    printf("Enter the number of elements in array: ");scanf("%d",&n);

    int arr[n];

    for (int i = 0; i<n; i++)
    {
        printf("Enter %d Element of array: ",i+1);scanf("%d",&arr[i]);
    }

    ans = max(arr,n);

    printf("The largest number in array is : %d",ans);

    
    return 0;
}

int max (int *arr,int n){
    static int a=1;

    while(arr[a]>*arr){
        printf("%d %d\n",*arr,arr[a]);
        arr++;}
    if(arr[a]<*arr){
        a++;
        max(arr,n);
    }
    return *arr;
}