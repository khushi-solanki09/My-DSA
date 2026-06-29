class Solution {
public:
    bool canMakeBouquets(vector<int>& bloomDay, int m, int k, int Days) {
        long long bouque = 0;
        long long total = 0;
        for(int i = 0; i<bloomDay.size(); i++) {
            if(bloomDay[i] <= Days) {
                bouque++;
                if(bouque == k) {
                    total++;
                    bouque = 0;
                }
            }
            else bouque = 0;
            
        }
        return total >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size())
            return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        int ans = -1;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(canMakeBouquets(bloomDay, m, k, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};
