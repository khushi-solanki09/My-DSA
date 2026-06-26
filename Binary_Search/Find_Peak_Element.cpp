class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size() - 1;
        int low = 0, high = n;
        while (low < high) {
            int mid = (low + high) / 2;
            if(nums[mid] > nums[mid + 1]) high = mid;
            else low = mid + 1;
        }
        return low;
    }

};
