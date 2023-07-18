// Approach 1.
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int max,min;
        for(int i=0; i<nums.size(); i++){
            if(i==0){max=min=nums[i];}
            if(max<nums[i]){max=nums[i];}
            if(min>nums[i]){min=nums[i];}
        }
        for(int i=0; i<nums.size(); i++){
            // if(i==0{};
            if(nums[i]!=max && nums[i]!=min){return nums[i];}
        }
    return -1;
    }
};

// Approach 2.
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2) return -1;
        sort(nums.begin(),nums.end());
        return nums[1];
    }
};