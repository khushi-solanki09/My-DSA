class Solution {
public:
    void helperFunc(vector<int>& nums ,vector<vector<int>>& ans ,vector<int>& curr ,int idx){
       
        ans.push_back(curr);
        for(int i = idx; i < nums.size(); i++) {
            if(i > idx && nums[i] == nums[i - 1]) continue;
            curr.push_back(nums[i]);
            helperFunc(nums,ans,curr,i + 1);
            
            curr.pop_back();
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(nums.begin(),nums.end());
        helperFunc(nums,ans,curr,0);
        return ans;
    }
};
