// Approach 1 -->> Direct Addition
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int n = digits.size();
        int i = n-1;
        do{
            if(i == n-1) digits[i]+=1;
            if(digits[i]==10){
                carry = 1;
                digits[i] = 0;
                i--;
            }
            else{
                digits[i]+=carry;
                if(digits[i]==10){
                    carry = 1;
                    digits[i]=0;
                }
                else carry = 0;
                i--;
            }
        }while(carry!=0 && i>=0);
        
        if(carry==1){
            digits.insert(digits.begin(),1);
            carry = 0;
        }
 
        return digits;
    }
};

// Better One
class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
        for(int i = n-1; i >= 0; i--){
            if(i == n-1)
                v[i]++;
            if(v[i] == 10){
                v[i] = 0;
                if(i != 0){
                    v[i-1]++;
                }
                else{
                    v.push_back(0);
                    v[i] = 1;
                }
            }
        }
        return v;
    }
};

// More Better
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n = digits.size() - 1;
      
      for (int i = n; i >= 0; --i){
        if (digits[i] == 9) {  
          digits[i] = 0;
        } 
        else {
          digits[i] += 1;
          return digits;
        }
      }
      digits.push_back(0);
      digits[0] = 1;
      return digits;
  
    }
};