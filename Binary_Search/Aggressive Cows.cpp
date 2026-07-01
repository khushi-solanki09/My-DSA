class Solution {
  public:
    long long maxDist(vector<int> &stalls, int k, int mid) {
        int cnt = 1;
        int prev = stalls[0];
        for(int i = 1; i<stalls.size(); i++) {
            if(stalls[i] - prev >= mid) {
                cnt++;
                prev = stalls[i];
            }
        }
        
        return cnt >= k;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(), stalls.end());
        
        int ans = 1;
        int low = 1, high = stalls[stalls.size() - 1] - stalls[0];
        while(low <= high) {
            int mid = (low + high) / 2;
            if(maxDist(stalls, k, mid)){
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
};
