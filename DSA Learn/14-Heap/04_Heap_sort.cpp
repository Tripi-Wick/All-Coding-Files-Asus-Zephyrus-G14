#include <iostream>
using namespace std;

void insert_heap(int h[], int idx){
    while(idx>1 && h[idx]>h[idx/2]){
        swap(h[idx],h[idx/2]);
        idx = idx/2;
    }
}

void heap_sort(int h[] , int len){
    for(int i=len-1; i>1; i--){
        swap(h[1],h[i]);

        int idx = 1;
        int n = idx*2;

        while(n<i-1){
            if(h[n]<h[n+1]){
                n=n+1;
            }
            if(h[idx]<h[n]){
                swap(h[idx],h[n]);
                idx = n;
                n = idx*2;
            }   
            else break;
        }
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
        insert_heap(heap,i);
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