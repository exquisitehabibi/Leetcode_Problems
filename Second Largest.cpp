class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        for(int i = arr.size()-1; i>=0;i--){
            if(arr[arr.size()-1]>arr[i]){
                return arr[i];
            }
        }
        return -1;
        // Code Here
    }
};
