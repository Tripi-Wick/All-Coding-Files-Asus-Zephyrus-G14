// Approach 1
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int dup_elem=0;

        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
            }
        }

        int index=nums.size();
        
        return index;
    }
};

// Approach 2
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        
        for(int j=1; j<nums.size(); j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }

        return i+1;
    }
};