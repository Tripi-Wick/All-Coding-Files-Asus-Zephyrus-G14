#include <iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the numbers of elements in array 1: ";
    cin>>a;

    int arr[a];

    for(int i=0;i<a;i++){
        cout<<"Enter the "<<i+1<<" element of array 1: ";
        cin>>arr[i];
    }

    cout<<"Enter the numbers of elements in array 2: ";
    cin>>b;

    int brr[b];

    for(int i=0;i<b;i++){
        cout<<"Enter the "<<i+1<<" element of array 2: ";
        cin>>brr[i];
    }

    int crr[a+b];
    int n=0;

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){   
            if(arr[i]==brr[j]){
                crr[n]=arr[i];
                n++;
                break;
            }   
        }
    }


    for(int i=0;i<n;i++){
        cout<<crr[i]<<endl;
    }

    return 0;
}