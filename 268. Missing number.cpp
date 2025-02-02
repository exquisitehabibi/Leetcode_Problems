class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i =0; i<nums.size();i++){
            if(i<nums[i]){
                return i;
            }
        }
        return max(n,nums[n-1]);
        
    }
};
