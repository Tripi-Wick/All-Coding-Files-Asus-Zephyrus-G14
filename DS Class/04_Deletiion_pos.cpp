#include <iostream>
using namespace std;

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

    int n;
    cout<<"Type the postion from where you want to delete element: ";
    cin>>n;

    for(int i=n;i<a;i++){
        arr[i]=arr[i+1];
    }

 
    for(int i=0;i<a-1;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}