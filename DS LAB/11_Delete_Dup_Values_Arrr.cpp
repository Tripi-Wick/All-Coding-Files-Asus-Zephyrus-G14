#include <iostream>
#include <algorithm>
using namespace std;

int delVal(int arr[],int a){
    int n=0;
    int crr[n];

    for(int i=0; i<a; i++){
        for(int j=0; j=a+1; j++){
            if(arr[i]!=arr[j]){
                crr[n]=arr[i];
                n++;
            }
        }
    }
    return crr;
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

    delVal(arr,a);

    for(int i=0; i<a; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}