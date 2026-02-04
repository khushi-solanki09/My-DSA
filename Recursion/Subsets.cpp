class Solution {
public:
    // void helper(vector<int>& nums,vector<vector<int>> &res,vector<int> &curr,int n,int idx){
    //     if(idx == n) {
    //         res.push_back(curr);
    //         return;
    //     }
    //     curr.push_back(nums[idx]);
    //     helper(nums,res,curr,n,idx+1);
    //     curr.pop_back();
    //     helper(nums,res,curr,n,idx+1);
    // }
    vector<vector<int>> subsets(vector<int>& nums) {
        // vector<vector<int>> res;
        // vector<int> curr;
        // int n = nums.size();
        // helper(nums,res,curr,n,0);
        // return res;
        int p = 1 << nums.size();
        vector<vector<int>> ans;
        for(int i = 0; i<p; i++) {
            vector<int>subset;
            for(int j = 0; j<nums.size(); j++) {
                if(i & (1 << j)) {
                    subset.push_back(nums[j]);
                }
            }
            ans.push_back(subset);
        }
        return ans;
    }
};
