class Solution {
public:
    void helperFunc(vector<int> &can ,int k ,vector<vector<int>> &ans ,vector<int> &curr ,int idx ,int sum){
        if(sum > k) {
            return;
        }
        if(sum == k){
            ans.push_back(curr);
            return;
        }
        for(int i = idx; i < can.size(); i++)
       {
            if(i > idx && can[i] == can[i - 1]) continue;
            curr.push_back(can[i]);
            helperFunc(can ,k ,ans ,curr , i + 1 ,sum + can[i]);
            curr.pop_back();
            }
    }
    vector<vector<int>> combinationSum2(vector<int>& can, int k) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(can.begin(), can.end());
        helperFunc(can,k,ans,curr,0,0);
        return ans;
    }
};
