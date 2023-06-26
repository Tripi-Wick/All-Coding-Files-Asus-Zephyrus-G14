// Approach 1
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(vector<int>::iterator itr = nums.begin(); itr!= nums.end();){
            if(*itr==val){
                itr =  nums.erase(itr);
            }
            else ++itr;
        }
        return nums.size();
    }
};

// Approach 2
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};