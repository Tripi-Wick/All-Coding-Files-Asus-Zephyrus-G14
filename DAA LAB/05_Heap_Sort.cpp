#include <iostream>
#include <chrono>
#include <cstdlib>
#include <vector>

using namespace std;

void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest])
    {
        largest = l;
    }
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heap_Sort(vector<int> &arr, int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

auto average_heap_sort(vector<int> arr, int n)
{
    auto start = std::chrono::high_resolution_clock::now();
    heap_Sort(arr, n);
    auto finish = std::chrono::high_resolution_clock::now();
    auto time = finish - start;
    return time;
}

auto worst_heap_sort(int n)
{
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(i);
    }
    auto start = std::chrono::high_resolution_clock::now();
    heap_Sort(arr, n);
    auto finish = std::chrono::high_resolution_clock::now();
    auto time = finish - start;
    return time;
}

auto best_heap_sort(int n)
{
    vector<int> arr;
    for (int i = n; i > 0; i--)
    {
        arr.push_back(i);
    }
    auto start = std::chrono::high_resolution_clock::now();
    heap_Sort(arr, n);
    auto finish = std::chrono::high_resolution_clock::now();
    auto time = finish - start;
    return time;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int lb = 0;
    int rb = 100;

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(rand() % (rb - lb + 1));
    }
    cout << endl;

    auto best_time = best_heap_sort(n);
    cout << "Time Taken for best case = " << (best_time / std::chrono::microseconds(1)) << " microseconds" << endl;

    auto average_time = average_heap_sort(arr, n);
    cout << "Time Taken for average case = " << (average_time / std::chrono::microseconds(1)) << " microseconds" << endl;

    auto worst_time = worst_heap_sort(n);
    cout << "Time Taken for worst case = " << (worst_time / std::chrono::microseconds(1)) << " microseconds" << endl;

    return 0;
}