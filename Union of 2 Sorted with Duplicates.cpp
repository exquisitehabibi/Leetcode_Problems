class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set <int> result (a.begin(),a.end());
        result.insert(b.begin(),b.end());
        return vector<int>(result.begin(),result.end());
        // Your code here
        // return vector with correct order of elements
    }
};
