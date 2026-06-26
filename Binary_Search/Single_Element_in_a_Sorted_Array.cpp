class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(mid == 0) return nums[0];
            else if(mid == n-1) return nums[n-1];

            else if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) return nums[mid];
            
            else if(nums[mid] == nums[mid - 1]) {
                int left = (mid - 1) - low;
                if(left % 2 == 0) low = mid + 1;
                else high = mid - 2;
            }
            else{
               int left = mid - low;
               if(left % 2 == 0) low = mid + 2;
               else high = mid - 1;
            }
        }
        return -1;
    }
};
