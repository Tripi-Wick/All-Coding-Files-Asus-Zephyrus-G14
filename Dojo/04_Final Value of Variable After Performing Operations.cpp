// Approach 1 :
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(int i = 0; i<operations.size(); i++){
            if(operations[i]=="--X" || operations[i]=="X--" ){ans--;}
            else if(operations[i]=="++X" || operations[i]=="X++" ){ans++;}
        }
        return ans;
    }
};

// Approach 2 :
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for(int i = 0; i<operations.size(); i++){
            if(operations[i][1]=='-') ans--;
            if(operations[i][1]=='+') ans++;
        }
        return ans;
    }
};