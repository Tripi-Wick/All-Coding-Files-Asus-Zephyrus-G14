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

void left_shift(struct Array arr, int times){
    
    for(int j=0; j<times ; j++){
        for(int i=0; i<arr.length ; i++){
           arr.a[i]=arr.a[i+1];
        }
    }
}

int main()
{
    struct Array arr;
    int times;

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
    
    cout<<"Enter the number of times you wanna shift the array : ";
    cin>>times;

    left_shift(arr,times);

    cout <<"---------------------------------"<<endl;
    display(arr);

    return 0;
}