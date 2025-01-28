class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());

        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            rotate(nums.begin(), nums.begin() + 1, nums.end());

            if (nums == arr) {
                return true;
            }
        }
        return false;
    }
};
