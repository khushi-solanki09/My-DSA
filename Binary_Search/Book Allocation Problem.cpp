class Solution {
  public:
    bool check(vector<int> &arr, int k, int mid) {
        int cnt = 1;
        int sum = 0;
        for(int i = 0; i<arr.size(); i++) {
            if(sum + arr[i] > mid) {
                sum = arr[i];
                cnt++;
            }
            else sum += arr[i];
        }
        return cnt <= k;
    }
    
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k > arr.size())
            return -1;
        int maxi = *max_element(arr.begin(), arr.end());
        int sum = accumulate(arr.begin(), arr.end(), 0);
        int low = maxi;
        int high = sum;
    
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
