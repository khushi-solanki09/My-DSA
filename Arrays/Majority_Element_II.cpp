class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector<int>result;
       int n = nums.size();
       int valid =  n/3;
       unordered_map<int,int>freq;

       for(int i = 0; i<n; i++){
        freq[nums[i]]++;
       }
       
       for(auto it:freq){
        if(it.second > valid) {
            result.push_back(it.first);
        }
       }

       return result;
    }
};
