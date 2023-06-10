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

void left_Rotate(struct Array arr, int times){
    
    for(int i=0; i<times ; i++){
        int temp;
        temp = arr.a[0];
        for(int j=0; j<arr.length ; j++){
            arr.a[j]=arr.a[j+1];
        }
        arr.a[arr.length-1] = temp;
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
    
    cout<<"Enter the number of times you wanna Rotate the array : ";
    cin>>times;

    left_Rotate(arr,times);

    cout <<"---------------------------------"<<endl;
    display(arr);

    return 0;
}