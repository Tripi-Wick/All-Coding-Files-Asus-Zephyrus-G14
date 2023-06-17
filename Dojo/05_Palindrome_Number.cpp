class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0, temp=x;

            if(x<0){return false;}
            while(temp != 0){
                rev *= 10;
                rev += (temp%10);
                temp = temp/10;
            }
            if(rev!=x) return false;
            else return true;
    }
};