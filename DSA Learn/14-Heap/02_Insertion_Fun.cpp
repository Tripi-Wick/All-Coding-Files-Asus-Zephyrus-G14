#include <iostream>
using namespace std;

void insert_heap(int h[], int idx){
    while(idx>0 && h[idx]>h[(idx-1)/2]){
        swap(h[idx],h[(idx-1)/2]);
        idx = (idx-1)/2;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter in the heap : ";
    cin>>n;

    int heap[n];

    for(int i=0; i<n; i++){
        int temp;
        cout<<"Enter the "<<i+1<<" element you want to add : ";
        cin>>temp;

        heap[i] = temp;
        insert_heap(heap,i);
    }

    for(int i=0; i<n; i++){
        cout<<heap[i]<<" ";
    }

    return 0;
}