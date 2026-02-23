class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i = 0,j = 1;
        vector<int> result(nums.size(),0);
        for(int it : nums){
            if(it > 0){
                result[i] =  it;
                i+=2;
            }
            else{
                result[j] = it;
                j+=2;
            }
        }
        return result;
    }
};
