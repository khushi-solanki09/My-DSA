class Solution {
public:
    void helper(int k, int n, vector<vector<int>>& ans, vector<int> curr, int sum, int idx){
        if(sum == n && curr.size() == k){
            ans.push_back(curr);
            return;
        }
        if(sum > n || curr.size() > k) return;
        for(int i = idx; i<=9; i++) {
            curr.push_back(i);
            helper(k, n, ans, curr, sum+i, i+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> curr;
        helper(k, n, ans, curr, 0, 1);
        return ans;
    }
};
