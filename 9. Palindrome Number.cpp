class Solution {
public:
    bool isPalindrome(int x) {
        long long d, rev =0;
        int f=x;
        if(x<0){
            return false;
        }
        while(x){
            d=x%10;
            rev = rev*10+d;
            x/=10;  
        }
        if (rev == f){
            return true;
        }
        return false;
        
    }
};
