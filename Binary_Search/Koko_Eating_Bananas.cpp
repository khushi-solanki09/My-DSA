class Solution {
public:
    bool canEatBananas(vector<int>& piles,int h, int k) {
        long long m = 0;
        for(int i = 0; i<piles.size(); i++) {
            m += ((piles[i] + (k - 1))/ k);
        }
        return m <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxElem = *max_element(piles.begin(), piles.end());
        int low = 1, high = maxElem;
        int ans = 0;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(canEatBananas(piles,h,mid)) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};
