class Solution {
  public:
    bool armstrongNumber(int n) {
        int d,num=n,sum=0;
        while(num){
            d= num%10;
            sum+=pow(d,3);
            num/=10;
        }
        if(sum==n){
            return true;
        }
        return false;
        // code here
    }
};
