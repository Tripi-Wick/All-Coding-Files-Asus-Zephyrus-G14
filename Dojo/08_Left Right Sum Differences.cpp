// Approach 1
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftSum(nums.size()),rightSum(nums.size()),l_s_diff(nums.size());
        for(int i=0; i<nums.size(); i++){
            for(int j = 0; j < i; j++){
                leftSum[i] = leftSum[i] + nums[j];
            }
        }
        for(int i=0; i<nums.size(); i++){
            for(int j=nums.size()-1; j>i; j--){
                rightSum[i] = rightSum[i] + nums[j];
            }
        }
        for(int i=0; i<nums.size(); i++){
            l_s_diff[i] = rightSum[i]-leftSum[i];
            if(l_s_diff[i]<0){l_s_diff[i]*=-1;}
        }
        return l_s_diff;
    }
};

// Approach 2
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftSum(nums.size()),rightSum(nums.size()),l_s_diff(nums.size());
        for(int i=0; i<nums.size(); i++){
            for(int k=0,j=nums.size()-1; j>i; k++,j--){
                leftSum[i] = leftSum[i] + nums.at(k);
                rightSum[i] = rightSum[i] + nums.at(j); 
            } 
        }
        for(int i=0, j= nums.size()-1; i<j; i++,j--){
            swap (leftSum[i],leftSum[j]);
        }
        for(int i=0; i<nums.size(); i++){
            l_s_diff[i] = rightSum[i]-leftSum[i];
            if(l_s_diff[i]<0){l_s_diff[i]*=-1;}
        }
        return l_s_diff;
    }
};

// Approach 3
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftSum(nums.size()),rightSum(nums.size()),l_s_diff(nums.size());
        for(int i=0; i<nums.size(); i++){
            for(int k=0,j=nums.size()-1; j>i; k++,j--){
                leftSum[i] = leftSum[i] + nums.at(k);
                rightSum[i] = rightSum[i] + nums.at(j); 
            } 
        }
        for(int i=0, j= nums.size()-1; i<j; i++,j--){
            swap (leftSum[i],leftSum[j]);
        }
        for(int i=0; i<nums.size(); i++){
            l_s_diff[i] = rightSum[i]-leftSum[i];
            if(l_s_diff[i]<0){l_s_diff[i]*=-1;}
        }
        return l_s_diff;
    }
};