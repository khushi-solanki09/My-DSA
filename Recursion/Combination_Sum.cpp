class Solution {
public:
    void helperFunc(vector<int> &can ,int k ,vector<vector<int>> &ans ,vector<int> &curr ,int idx ,int sum){
        if(sum == k) {
            ans.push_back(curr);
            return;
        }
        if(idx == can.size() || sum > k) return;
        curr.push_back(can[idx]);
        helperFunc(can, k, ans, curr, idx, sum + can[idx]);


        curr.pop_back();
        
        helperFunc(can ,k ,ans ,curr ,idx + 1 ,sum);
     }
    vector<vector<int>> combinationSum(vector<int>& cand, int k) {
        vector<vector<int>> ans;
        vector<int> curr;
        helperFunc(cand ,k ,ans ,curr ,0 ,0);
        return ans;
    }
};
