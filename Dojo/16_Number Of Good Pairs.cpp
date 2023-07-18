// Approach 1
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int x = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(i<j && nums[i]==nums[j]){
                    x++;
                }
            }
        }
        return x;
    }
};

// Approach 2
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int x = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]==nums[j]){
                    x++;
                }
            }
        }
        return x;
    }
};