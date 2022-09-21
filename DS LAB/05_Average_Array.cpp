#include <iostream>
using namespace std;

int main()
{
    int a;
    float sum=0;

    cout<<"Enter the number of elements in array: ";
    cin>>a;

    int arr[a];

    for(int i=0;i<a;i++){
        cout<<"Enter the "<<i+1<<" element of array: ";
        cin>>arr[i];
    }

    for(int i=0;i<a;i++){
        sum+=arr[i];
    }

    cout<<"The average of data entered in array is: "<<sum/a;

    return 0;
}