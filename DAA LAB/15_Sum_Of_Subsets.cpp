    #include <iostream>
    #include <vector>
    using namespace std;
    bool isSubsetSum(vector<int> &set, int n, int targetSum, vector<int> &subset)
    {
        if (targetSum == 0)
        {
            for (int i = 0; i < subset.size(); i++)
            {
                cout << subset[i] << " ";
            }
            cout << endl;
            return true;
        }
        if (n == 0 || targetSum < 0)
        {
            return false;
        }
        if (isSubsetSum(set, n - 1, targetSum, subset))
        {
            return true;
        }
        subset.push_back(set[n - 1]);
        if (isSubsetSum(set, n - 1, targetSum - set[n - 1], subset))
        {
            return true;
        }
        subset.pop_back();

        return false;
    }

    int main()
    {
        vector<int> set = {3, 34, 4, 12, 5, 2};
        int targetSum;
        cout << "Enter the targetSum: ";
        cin >> targetSum;

        vector<int> subset;

        if (isSubsetSum(set, set.size(), targetSum, subset))
        {
            cout << "Subset with the given sum exists." << endl;
        }
        else
        {
            cout << "No subset with the given sum exists." << endl;
        }

        return 0;
    }
