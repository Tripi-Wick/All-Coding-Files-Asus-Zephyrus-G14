#include <iostream>
using namespace std;

void Max(int a,int arr[]){

    int b = arr[0];
    for (int i = 0; i <a ; i++){
        if(b<arr[i]){
            b=arr[i];
        }
    }
    cout<<"The largest element of array is: "<<b<<endl;
}

void Min(int a,int arr[]){

    int b = arr[0];
    for (int i = 0; i <a ; i++){
        if(b>arr[i]){
            b=arr[i];
        }
    }
    cout<<"The smallest element of array is: "<<b<<endl;
}

int main()
{
    int a;

    cout<<"Enter the numbers of elements in array: ";
    cin>>a;

    int arr[a];

    for(int i=0;i<a;i++){
        cout<<"Enter the "<<i+1<<" element of array: ";
        cin>>arr[i];
    }

    Max(a,arr);
    Min(a,arr);

    return 0;
}