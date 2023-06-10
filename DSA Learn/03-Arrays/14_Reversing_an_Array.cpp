#include <iostream>
using namespace std;

struct Array{
    int* a;
    int size,length;
};

void display(struct Array arr){
    for(int i = 0; i<arr.length; i++){
        cout<<"The Element No. "<<i+1<<" = "<<arr.a[i]<<endl;
    }
}

void reverse(struct Array arr){
    for(int i=0, j=arr.length-1; j>i ; i++,j--){
        int temp;
        temp = arr.a[i];
        arr.a[i] = arr.a[j];
        arr.a[j] = temp;
    }
}

int main()
{
    struct Array arr;

    cout<<"Enter the size of array : ";
    cin>>arr.size;

    arr.a = new int[arr.size];

    cout<<"Enter the number of elements in the array : ";
    cin>>arr.length;

    for(int i = 0; i<arr.length; i++){
        cout<<"Enter the Element No. "<<i+1<<" = ";
        cin>>arr.a[i];
    }
    
    display(arr);

    reverse(arr);
    cout <<"---------------------------------"<<endl;
    display(arr);

    return 0;
}