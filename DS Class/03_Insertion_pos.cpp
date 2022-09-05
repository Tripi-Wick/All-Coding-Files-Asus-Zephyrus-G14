#include <iostream>
using namespace std;

int main()
{
    int a,b=0,c;

    cout<<"Enter the numbers of elements in array: ";
    cin>>a;

    int arr[a];

    for(int i=0;i<a;i++){
        cout<<"Enter the "<<i+1<<" element of array: ";
        cin>>arr[i];
        b++;
    }

    int n;
    cout<<"Type the postion where you want to add element: ";
    cin>>n;

    for(int i=a+1;i>n;i--){
        arr[i]=arr[i-1];
    }

    cout<<"Type the number which you want to add: ";
    cin>>c;

    arr[n]=c;

    for(int i=0;i<=a;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}