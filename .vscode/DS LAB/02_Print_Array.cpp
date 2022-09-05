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

    for (int i = 0; i < a; i++)
    {
        cout << "Enter the value of " << (i + 1) << " element of array is : "<<arr[i]<<endl;
    }

    return 0;
}