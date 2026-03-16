class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> unique;
        vector<vector<int>> output;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0; i<n-3; i++) {
            for(int j = i + 1; j<n-2; j++){
            long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j + 1;
                int high = n - 1;
                while(low < high) {
                    int sum = nums[low] + nums[high];
                    if(sum > newTarget) high--;
                    else if(sum < newTarget) low++;
                    else{
                        unique.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++;
                        high--;
                    }
                }
            }
        }
        for(auto it : unique){
            output.push_back(it);
        }
        return output;
    }
};
