// Approach 1 :
#include <limits.h>
class Solution {
public:
    int reverse(int x) {
        long int rev = 0, rem;
        while(x!=0){
            rem = x % 10;
            x = x / 10;
            if( (rev*10)>pow(2,31)-1 || (rev*10)<pow(-2,31)) {return 0;}
            rev *= 10;
            rev += rem;
        }
        return rev;
    }
};

// Approach 2 :
class Solution {
public:
    int reverse(int x) {
        int r = 0;
        while(x!=0){
            if(r>INT_MAX/10 || r<INT_MIN/10){return 0;}
            r= r*10 + x%10;
            x= x/10; 
        }
    return r;
    }
};
