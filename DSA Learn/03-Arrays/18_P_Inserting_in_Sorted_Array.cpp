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

void insert(struct Array* arr){

    int index, value;

    cout<<"---------------------------------------"<<endl;
    cout<<"Enter the element you want to add : ";
    cin>>value;

    arr->length++;

    for(int i = arr->length; arr->a[i]>value && i>=0; i--){
        arr->a[i]=arr->a[i-1];  
        index = i;      
    }

    arr->a[index] = value;
}

int sort(struct Array* arr){
    for(int i = 0; i<arr->length; i++){
       for(int j = 0; j<i; j++){
           if(arr->a[j]>arr->a[i]){
               swap(arr->a[i],arr->a[j]);
            }
        }
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
    sort(&arr);
    cout<<"---------------------------------------------"<<endl;
    display(arr);
    insert(&arr);
    cout<<"---------------------------------------------"<<endl;
    display(arr);
    cout<<"Length of Array : "<<arr.length<<endl;

    return 0;
}