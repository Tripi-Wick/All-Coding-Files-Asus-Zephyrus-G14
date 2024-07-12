//{ Driver Code Starts
#include <stdio.h>
#include <vector>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


    void merge(int arr[], int l, int m, int r)
    {
        vector<int> aux;
        int i=l, j=m+1;
        
        while(i<=m && j<=r){
            if(arr[i]<arr[j]){ aux.push_back(arr[i]); i++; }
            else{ aux.push_back(arr[j]);    j++; }
        }
        
        while(i<=m){aux.push_back(arr[i]); i++; }
        while(j<=r){aux.push_back(arr[j]); j++; }
            
        for(i=l, j=0; i<=r; i++, j++){arr[i]=aux[j];}
        
        aux.clear();
    }
    
    void mergeSort(int arr[], int l, int r)
    {
        if(l>r) return;
        int mid = (l+r)/2;
        mergeSort(arr,l,mid-1);
        mergeSort(arr,mid,r);
        merge(arr,l,mid,r);
    }

//{ Driver Code Starts.


int main()
{
    int n,i;

    n=4;
    
    int arr[n];

    for(i=0;i<n;i++)  scanf("%d",&arr[i]);

    printArray(arr, n);

    mergeSort(arr, 0, n-1);

    printArray(arr, n);

    return 0;
}
// } Driver Code Ends