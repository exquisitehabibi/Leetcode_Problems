class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i: nums){
            mp[i]++;
            if(mp[i]>1){
                mp.erase(i);
            }
        }
        return mp.begin()->first;
        
    }
};
