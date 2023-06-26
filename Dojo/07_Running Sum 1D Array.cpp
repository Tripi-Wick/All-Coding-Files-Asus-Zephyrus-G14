// Approach 1
class Solution {
public:
    int summ(int,vector<int>& );
    vector<int> res;
    vector<int> runningSum(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            res.push_back(summ(i,nums)) ;
        }
    return res;       
    }
};

int Solution :: summ(int j,vector<int>& nums){
    int num=0;
    for(int i=0; i<=j; i++){
        num+=nums[i];
    }
    return num;
} 

// Approach 2
class Solution {
public:
    vector<int>res;
    vector<int> runningSum(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int num=0;
            for(int j=0; j<=i; j++){
                num+=nums[j];
            }
            res.push_back(num);
        }
    return res;       
    }
};
// Approach 3
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
            res.push_back(nums[0]);
            for(int i=1; i<nums.size(); i++){
                res.push_back(nums[i]+res[i-1]);
            }
        return res;       
    }
};
