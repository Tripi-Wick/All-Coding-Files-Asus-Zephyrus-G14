// Approach 1
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0, temp=0;
        for(int i=0; i<accounts.size(); i++){
            for(int j=0; j<accounts[i].size(); j++){
                temp += accounts[i][j];
            }
            if(temp >= res){res = temp;}
            temp=0;
        }
        return res;
    }
};

// Approach 2
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0;
        for(auto &i: accounts){
            res = max(res, accumulate(i.begin(), i.end(),0));
        }
        return res;
    }
};