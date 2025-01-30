class Solution {
  public:
    
    vector<long long> factorialNumbers(long long n) {
        vector<long long> arr;
        long long f = 1, i = 1;

        while (f <= n) {
            arr.push_back(f);
            i++;
            f *= i;  
        }

        return arr;
    }
};
