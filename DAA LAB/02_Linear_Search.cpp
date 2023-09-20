#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>

using namespace std;

auto linear_search(vector<int> arr, int n, int key)
{
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            break;
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto time = end - start;
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

    int best_key = arr[0]; // Best case: the key is found in the first element
    int worst_key = rand(); // Worst case: the key is not in the array, so it's a random value
    int avg_key = arr[rand() % n]; // Average case: a random key from the array

    auto best_time = linear_search(arr, n, best_key);
    cout << "Time taken for best case: " << (best_time.count()) << " microseconds" << endl;

    auto worst_time = linear_search(arr, n, worst_key);
    cout << "Time taken for worst case: " << (worst_time.count()) << " microseconds" << endl;

    auto avg_time = linear_search(arr, n, avg_key);
    cout << "Time taken for average case: " << (avg_time.count()) << " microseconds" << endl;

    return 0;
}
