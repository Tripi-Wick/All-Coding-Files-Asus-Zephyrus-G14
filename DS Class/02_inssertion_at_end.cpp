#include <iostream>
using namespace std;

int main()
{
    int arr[100]={10,20,30,40,5};
    
    arr[5]=90;

    for(int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}