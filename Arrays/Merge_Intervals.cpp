class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> vec;
        sort(intervals.begin(),intervals.end());
        for(auto elem : intervals) {
            if( vec.empty() || vec.back()[1] < elem[0] ) {
                 vec.push_back(elem);
            }
            else {
               vec.back()[1] = max(elem[1],vec.back()[1]);
            }
        }
        return vec;
    }
};
