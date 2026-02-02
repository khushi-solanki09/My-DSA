class Solution {
public:
    void helperFunc(vector<vector<int>>& ans ,vector<int>& curr ,int k ,int n ,int idx ,int sum ,int cnt) {
         if(sum == n && cnt == k) {
            ans.push_back(curr);
            return;
        }
        if(idx > 9 || sum > n || cnt > k) return;
        curr.push_back(idx);
        helperFunc(ans,curr,k,n,idx + 1,sum + idx,cnt+1);
        curr.pop_back();
        helperFunc(ans,curr,k,n,idx + 1,sum,cnt);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> curr;
        helperFunc(ans,curr,k,n,1,0,0);
        return ans;
    }
};
