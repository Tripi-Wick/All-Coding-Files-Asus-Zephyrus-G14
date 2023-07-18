// Approach 1

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int rmax = 0;
        for(int i=0; i<candies.size(); i++){
            if(rmax<candies.at(i)){rmax=candies[i];}
        }
        for(int i=0; i<candies.size(); i++){
            if((candies.at(i) + extraCandies) >= rmax){res.push_back(true);}
            else res.push_back(false);
        }
    return res;
    }
};

// Approach 2
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int rmax = 0;
        for(int i=0; i<candies.size(); i++){
            rmax = max(rmax,candies[i]);
        }
        for(int i=0; i<candies.size(); i++){
            if((candies.at(i) + extraCandies) >= rmax){res.push_back(true);}
            else res.push_back(false);
        }
    return res;
    }
};