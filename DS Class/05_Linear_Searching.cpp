#include <iostream>
using namespace std;

int main()
{
    int a,b=0;

    cout<<"Enter the numbers of elements in array: ";
    cin>>a;

    int arr[a];

    for(int i=0;i<a;i++){
        cout<<"Enter the "<<i+1<<" element of array: ";
        cin>>arr[i];
    }

    int n;
    cout<<"Type the element whose position you want to know: ";
    cin>>n;

    for(int i=0;i<a;i++){
        if(arr[i]==n){
            break;
        }
        else b++;
    }

    cout<<"THe position of element you want to know is: "<<b;

    return 0;
}