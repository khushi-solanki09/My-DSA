class Solution {
public:
    bool canLoad(vector<int>& weights, int days, int capacity) {
        int sum = 0;
        int d = 1;
        for(int i = 0; i<weights.size(); i++) {
            if(weights[i] + sum <= capacity) {
                sum += weights[i];
            }
            else{
                d++;
                sum = weights[i];
            }
        }
        return d <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = high;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(canLoad(weights, days, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};
