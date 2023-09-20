#include <iostream>
#include <chrono>
#include <vector>
using namespace std;

void ascending_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void descending_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    chrono::time_point<chrono::system_clock> start, end;
    int n;
    cout << "Enter the Numbers : ";
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand();
    }

    // ascending_sort(arr, n);
    descending_sort(arr,n);

    start = std::chrono::system_clock::now();
    cout << "Bubble Sort : ";
    bubbleSort(arr, n);
    cout << '\n';
    end = chrono::system_clock::now();

    chrono::duration<double> elapsed_seconds = end - start;
    time_t end_time = chrono::system_clock::to_time_t(end);

    cout << "finished computation at " << std::ctime(&end_time) << "Elapsed time: " << elapsed_seconds.count() << "s\n";
    delete[] arr;

    return 0;
}