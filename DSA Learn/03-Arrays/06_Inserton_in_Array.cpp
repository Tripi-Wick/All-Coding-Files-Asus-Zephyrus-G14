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

void insert(struct Array arr){

    int index, value;

    cout<<"---------------------------------------"<<endl;
    cout<<"Enter the index No. where you wanna add extra value : ";
    cin>>index;
    cout<<"Enter the value of element ";
    cin>>value;

    for(int i = arr.length; i>index; i--){
        arr.a[i]=arr.a[i-1];        
    }

    arr.a[index]=value;
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

    insert(arr);
    arr.length++;

    display(arr);

    return 0;
}