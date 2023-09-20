#include <iostream>
#include <chrono>
#include <vector>

using namespace std;

int get_Max(vector<int> &arr, int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void count_Sort(vector<int> &arr, int n, int exp)
{
    int output[n];
    int i;
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}
void radix_Sort(vector<int> &arr, int n)
{
    int max = get_Max(arr, n);
    for (int exp = 1; max / exp > 0; exp *= 10)
    {
        count_Sort(arr, n, exp);
    }
}
auto average_sort(vector<int> arr, int n)
{
    auto start = std::chrono::high_resolution_clock::now();
    radix_Sort(arr, n);
    auto finish = std::chrono::high_resolution_clock::now();
    auto time = finish - start;
    return time;
}
auto best_radix_sort(int n)
{

    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        arr.push_back(i);
    }
    auto start = std::chrono::high_resolution_clock::now();
    radix_Sort(arr, n);
    auto finish = std::chrono::high_resolution_clock::now();
    auto time = finish - start;
    return time;
}
auto worst_radix_sort(int n)
{

    vector<int> arr;
    for (int i = n; i > 0; i--)
    {
        arr.push_back(i);
    }
    auto start = std::chrono::high_resolution_clock::now();
    radix_Sort(arr, n);
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
        arr.push_back(rand() % (lb + rb + 1));
    }

    cout << endl;
    auto best_time = best_radix_sort(n);
    cout << "Time Taken for best case : " << (best_time / std::chrono::microseconds(1)) << " microseconds" << endl;

    auto average_time = average_sort(arr, n);
    cout << "Time Taken for average case : " << (average_time / std::chrono::microseconds(1)) << " microseconds" << endl;

    auto worst_time = worst_radix_sort(n);
    cout << "Time Taken for worst case : " << (worst_time / std::chrono::microseconds(1)) << " microseconds" << endl;
    cout << endl;

    return 0;
}
