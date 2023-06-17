// 1st Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        bool exit=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if((nums[i]+nums[j])==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    exit = 1;
                    break;
                }
            }
            if(exit == 1){break;}
        }
        return ans;
    }
};

// 2nd Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if((nums[i]+nums[j])==target){
                    return{i,j};
                }
            }
        }
        return {};
    }
};