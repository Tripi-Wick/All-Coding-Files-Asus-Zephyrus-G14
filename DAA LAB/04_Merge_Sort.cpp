#include <iostream>
#include <time.h>
#include <cstdlib>
#include <chrono>
#include <vector>
using namespace std;
void merge(vector<int> &arr, int start, int mid, int end)
{

    int len1 = mid - start + 1;
    int len2 = end - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int main_arr_index = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[main_arr_index++];
    }
    int k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }
    int index1 = 0;
    int index2 = 0;
    main_arr_index = start;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[main_arr_index++] = first[index1++];
        }
        else
        {
            arr[main_arr_index++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[main_arr_index++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[main_arr_index++] = second[index2++];
    }
    delete[] first;
    delete[] second;
}
void mergeSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
auto average_merge_sort(vector<int> arr, int n)
{
    auto start = std::chrono::high_resolution_clock::now();
    mergeSort(arr, 0, n - 1);
    auto finish = std::chrono::high_resolution_clock::now();
    auto time = finish - start;
    return time;
}
auto best_merge_sort(int n)
{
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(i);
    }
    auto start = std::chrono::high_resolution_clock::now();
    mergeSort(arr, 0, n - 1);
    auto finish = std::chrono::high_resolution_clock::now();
    auto time = finish - start;
    return time;
}
auto worst_merge_sort(int n)
{
    vector<int> arr;
    for (int i = n - 1; i >= 0; i--)
    {
        arr.push_back(i);
    }
    auto start = std::chrono::high_resolution_clock::now();
    mergeSort(arr, 0, n - 1);
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
    auto best_time = best_merge_sort(n);
    cout << "Time Taken for best case = " << (best_time / std::chrono::microseconds(1)) << " microseconds" << endl;
    auto average_time = average_merge_sort(arr, n);
    cout << "Time Taken for average case = " << (average_time / std::chrono::microseconds(1)) << " microseconds" << endl;

    auto worst_time = worst_merge_sort(n);
    cout << "Time Taken for worst case = " << (worst_time / std::chrono::microseconds(1)) << " microseconds" << endl;
    cout << endl;

    return 0;
}
