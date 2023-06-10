class Solution {
public:
    int shuffle(int& nums, int n) {
        for(int i=1; i<(2*n); i++){
            if((i%2)!=0){
                for(int j=n+i-1; j>i; j--){
                    swap(nums[j],nums[j-1]);
                }
            }
        }
        return nums;
    }
};