class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i = 0; i< mat.size(); i++){
            for(int j=0; j< mat[i].size(); j++){
                int rev = j + i ;
                if(i==j || rev == (mat[0].size()-1)){
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};