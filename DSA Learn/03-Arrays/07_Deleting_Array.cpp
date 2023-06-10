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

void del(struct Array* arr){

    int index;

    cout<<"---------------------------------------"<<endl;
    cout<<"Enter the index No. from where you wanna delete element : ";
    cin>>index;

    for(int i = index; i<arr->length; i++){
        arr->a[i]=arr->a[i+1];        
    }

    arr->length--;
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

    del(&arr);

    display(arr);

    return 0;
}