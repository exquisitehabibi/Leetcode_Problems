class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.rbegin(), c.rend());
        int i=0; //h index
        while(i<c.size() && i<c[i]) i++;
        return i;
    }
};
