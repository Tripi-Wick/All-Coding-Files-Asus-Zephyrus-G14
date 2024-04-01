// Approach 1

class Solution {
public:
    int lengthOfLastWord(string s) {
    int pos=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]==' ' && s[i+1]!=' ' && i<s.length()-1){
                pos = i+1;
            }
        }
    int count = 0;
        for(pos; pos<s.length() && s[pos]!=' ';pos++){
            count++;
        } 
    return count;
    }
};

// Approach 2

class Solution {
public:
    int lengthOfLastWord(string s) { 
        int len = 0, tail = s.length() - 1;
        while (tail >= 0 && s[tail] == ' ') tail--;
        while (tail >= 0 && s[tail] != ' ') {
            len++;
            tail--;
        }
        return len;
    }
};

// Approach 2 - with for loop
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        for(int i=s.size()-1;i>=0;--i){
            if(s[i] == ' ' && ans > 0) return ans;
            if(s[i] != ' ') ans++;
        }
        return ans;
    }
};