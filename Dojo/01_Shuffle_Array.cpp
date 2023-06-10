/*
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
Return the array in the form [x1,y1,x2,y2,...,xn,yn].
*/

// #1 First Try 


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int k = n-1;
        for(int i=0; i<2*n-2; i++){
            int j = i + k;
            if((i%2)!=0){
                for(j; j>i; j--){
                    swap(nums[j],nums[j-1]);
                }
            k--;
            }
        }
        return nums;
    }
};


// Second Try

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(2*n);
        int j = n;
        for(int i=0; i<n; i++){
            res[2*i] = nums[i];
            res[2*i+1] = nums[j];
            j++;
        }
        return res;
    }
};

// Best Solution

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> new_Arr(2*n);
        int k = 0;
        for(int i = 0;  i < n; i++){
            new_Arr[k++] = nums[i];
            new_Arr[k++] = nums[i+n];
        }
        return new_Arr;
    }
};