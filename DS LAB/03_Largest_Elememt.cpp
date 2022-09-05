#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter the number of elements of array: ";
    cin >> a;

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Enter the " << (i + 1) << "element of array : ";
        cin >> arr[i];
    }

    int b = arr[0];

    for (int i = 0; i < a; i++)
    {
        if(b<arr[i]){
            b=arr[i];
        }
    }

    cout<<"The largest element of array is: "<<b;

    return 0;
}