// User function Template for Java
class Solution {
    public static int sumOfDivisors(int n) {
        int sum =0;
        if(n==1){
            return 1;
        }
        for(int j = 1; j<=n;j++){
            for(int i =1; i<=j;i++){
                if(j%i==0){
                    sum+=i;
                }
            }
        }
        return sum;
        // code here
    }
}
