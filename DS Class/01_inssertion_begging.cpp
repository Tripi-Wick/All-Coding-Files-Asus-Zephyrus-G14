#include <iostream>
using namespace std;

int main()
{
    int arr[]={10,20,40,30,5};
    for(int i=5;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=90;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<',';
    }
    return 0;
}