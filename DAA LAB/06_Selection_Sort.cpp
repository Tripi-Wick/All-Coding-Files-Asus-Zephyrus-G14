#include <iostream>
#include <cstdlib>
#include <chrono>
#include <vector>

using namespace std;

void selection_Sort(vector<int> &arr, int n)
{
    int i, j, min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[min], arr[i]);
        }
    }
}
auto average_selection_sort(vector<int> arr, int n)
{
    auto start = std::chrono::high_resolution_clock::now();
    selection_Sort(arr, n);
    auto finish = std::chrono::high_resolution_clock::now();
    auto time = finish - start;
    return time;
}
auto best_selection_sort(int n)
{

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(i);
    }
    auto start = std::chrono::high_resolution_clock::now();
    selection_Sort(arr, n);
    auto finish = std::chrono::high_resolution_clock::now();
    auto time = finish - start;
    return time;
}
auto worst_selection_sort(int n)
{

    vector<int> arr;
    for (int i = n; i > 0; i--)
    {
        arr.push_back(i);
    }
    auto start = std::chrono::high_resolution_clock::now();
    selection_Sort(arr, n);
    auto finish = std::chrono::high_resolution_clock::now();
    auto time = finish - start;
    return time;
}

int main()
{

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(rand());
    }

    cout << endl;
    auto best_time = best_selection_sort(n);

    cout << "Time Taken for best case : " << (best_time / std::chrono::microseconds(1)) << " microseconds" << endl;
    auto average_time = average_selection_sort(arr, n);

    cout << "Time Taken for average case : " << (average_time / std::chrono::microseconds(1)) << " microseconds" << endl;

    auto worst_time = worst_selection_sort(n);
    cout << "Time Taken for worst case : " << (worst_time / std::chrono::microseconds(1)) << " microseconds" << endl;

    cout << endl;

    return 0;
}
