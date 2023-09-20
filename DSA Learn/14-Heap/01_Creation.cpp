#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cout<<"Enter the number of elements you want to enter in the heap : ";
    cin>>n;

    int heap[n];
    heap[0]=0;

    for(int i=1; i<n; i++){
        int temp;
        cout<<"Enter the element you want to add : ";
        cin>>temp;

        heap[i]=temp;

        int j=i;
        // With array index beginning from 0
        // while(j>0 && temp > heap[(j-1)/2]){
        //     swap(heap[j],heap[(j-1)/2]);
        //     j = (j-1)/ 2;
        // }  
        
        // With array index beginning from 1
        heap[0] = 0;
        while(j>1 && temp > heap[j/2]){
            swap(heap[j],heap[j/2]);
            j = j / 2;
        }  
    }
    
    for(int i=0; i<n; i++){
        cout<<heap[i]<<" ";
    }

    return 0;
}