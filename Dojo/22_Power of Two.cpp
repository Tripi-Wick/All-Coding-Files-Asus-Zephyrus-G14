// Approach 1 :
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0) return false;

        int res = n;
        if(res==0) return false;
        if(res==1) return true;

        while(res/2!=1 && n!=0){
        res /= 2;
        if(res%2!=0) return false;
        }
        if(res==2 && n%2==0) return true;

        return false;
    }
};

// Approach 2 :
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        while(n%2==0) n/=2;
        return n==1;
    }
};

// Approach 3 :
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return ((n&(n-1))==0);
    }
};
/*
number->binary form
3->0000 0011
4->0000 0100
5->0000 0101
6->0000 0110
7->0000 0111
8->0000 1000
The observation we can conclude is that the number which is a power of two has always compulsorily 1 true bit.
Now consider :-
bit representation of 7  -> 0111
bit representation of 8  -> 1000
bitwise AND of 7 and 8 -> 0000
we are gonna use this property for for all numbers which are powers of two
*/