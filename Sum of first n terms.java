// Given an integer n, calculate the sum of series 1^3 + 2^3 + 3^3 + 4^3 + … till n-th term

class Solution {
    int s(int n, int sum){
        sum+=n*n*n;
        if(n==1){ return sum;}
        return s(n-1,sum);
    }
    int sumOfSeries(int n) {
        int sum = s(n,0);
        return sum;
        // code here
    }
}
