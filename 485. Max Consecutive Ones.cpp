class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max1 = 0;
        for(int i: nums){
            if(i==1){
                count++;
            }
            else{
                max1 = max(max1,count);
                count=0;
            }
        }
        return max(max1,count);
        
    }
};
