class Solution {
  public:
    bool check(vector<int>& nums, int k, int mid) {
        int sum = nums[0];
        int cnt = 1;
        for(int i = 1; i<nums.size(); i++) {
            if(sum + nums[i] > mid) {
                cnt++;
                sum = nums[i];
            }
            else sum += nums[i];
        }
        return cnt <= k;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int maxi = *max_element(arr.begin(), arr.end());
        int sum = accumulate(arr.begin(), arr.end(), 0);
        int low = maxi, high = sum;
        int ans = 0;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(check(arr, k, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};
