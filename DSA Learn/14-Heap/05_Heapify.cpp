#include <iostream>
using namespace std;

void heapify(int arr[], int len, int beg){
    int maxIdx = beg;
    int l = 2*beg;
    int r = 2*beg+1;

    if(l<len && arr[l]>arr[maxIdx])
        maxIdx = l;
    if(r<len && arr[r]>arr[maxIdx])
        maxIdx = r;
    if(maxIdx != beg){
        swap(arr[beg],arr[maxIdx]);
        heapify(arr,len,maxIdx);
    }
}
void heap_sort(int arr[], int len){
    for(int i=len-1; i>0; i--){
        swap(arr[1],arr[i]);
        heapify(arr,i,1);
    }
}
void heap_creation(int arr[],int len){
    for(int i=(len/2); i>0; i--){
        heapify(arr,len,i);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter in the heap : ";
    cin>>n;
    n++;

    int heap[n];
    heap[0]=0;
    for(int i=1; i<n; i++){
        int temp;
        cout<<"Enter the "<<i<<" element you want to add : ";
        cin>>temp;

        heap[i] = temp;
        heap_creation(heap,i);
    }

    for(int i=1; i<n; i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;

    heap_sort(heap,n);

    for(int i=1; i<n; i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;

    return 0;
}