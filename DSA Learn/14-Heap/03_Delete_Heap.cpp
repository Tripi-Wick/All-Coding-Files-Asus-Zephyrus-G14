#include <iostream>
using namespace std;

void insert_heap(int h[], int idx){
    while(idx>1 && h[idx]>h[idx/2]){
        swap(h[idx],h[idx/2]);
        idx = idx/2;
    }
}

void delete_heap(int h[] , int& len){
    h[1]= h[len-1];
    len--;

    int i,j;
    i=1;
    j = i*2;
    while(j<len){
        if(h[j]<h[j+1]){
            j=j+1;
        }
        if(h[i]<h[j]){
            swap(h[i],h[j]);
            i = j;
            j = i*2;
        }   
        else break;
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

    delete_heap(heap,n);
    for(int i=1; i<n; i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;

    return 0;
}