#include <iostream>
#include<bits/stdc++.h>
#include<time.h>
#include<cstdlib>
#include <vector>
#include <chrono>
using namespace std;

auto average_binary_search(vector<int> arr, int n)
{
    int key = arr[0];
    sort(arr.begin(), arr.end());
    auto start = std::chrono::high_resolution_clock::now();
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            break;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto time = end - start;
    return time;
}
auto best_binary_search(vector<int> arr, int n)
{

    sort(arr.begin(), arr.end());
    auto start = std::chrono::high_resolution_clock::now();
    int left = 0;
    int right = n - 1;
    int key = arr[(left + right) / 2];
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            break;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto time = end - start;
    return time;
}
auto worst_binary_search(vector<int> arr, int n)
{
    int key = arr[n - 1];
    sort(arr.begin(), arr.end());
    auto start = std::chrono::high_resolution_clock::now();
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            break;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto time = end - start;
    return time;
}
int main()
{
    int T;
    cout << "Enter the number of values of n:";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cout << "Enter the value of n:";
        cin >> n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back(rand());
        }
        auto best_time = best_binary_search(arr, n);
        cout << "Time taken for best case=" << (best_time / std::chrono::nanoseconds(1)) << "nanoseconds" << endl;
        auto average_time = average_binary_search(arr, n);
        cout << "Time taken for average case=" << (average_time / std::chrono::nanoseconds(1)) << "microseconds" << endl;
        auto worst_time = worst_binary_search(arr, n);
        cout << "Time taken for average case=" << (worst_time / std::chrono::nanoseconds(1)) << "microseconds" << endl;
    }
    return 0;
}
