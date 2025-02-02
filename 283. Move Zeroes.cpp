class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        //find and erase
        
        // int count =0;
        // for(int i : nums){
        //     if(i==0){
        //         count++;
        //     }
        // }

        // for(int i : nums){
        //     if(i==0){
        //         count++;
        //         continue;
        //     }
        //     ans.push_back(i);
        // }

        // for(int i =0 ; i<count;i++ ){
        //     nums.erase(find(nums.begin(), nums.end(), 0));
        //     nums.push_back(0);
        // }

        int count=0;
        vector <int> ans=nums;
        nums.clear();
        for(int i : ans){
            if(i==0){
                count++;
                continue;
            }
            nums.push_back(i);
        }
        for(int i =0;i<count;i++){
            nums.push_back(0);
        }
    }
};
