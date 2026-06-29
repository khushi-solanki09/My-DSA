class Solution {
public:
    bool validDivisor(vector<int>& nums ,int Th, int k) {
        long long m = 0;
        for(int i = 0; i<nums.size(); i++) {
            m += ((nums[i] + (k - 1))/ k);
        }
        return m <= Th;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxElem = *max_element(nums.begin(), nums.end());
        int low = 1, high = maxElem;
        int ans = 0;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(validDivisor(nums,threshold,mid)) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};
