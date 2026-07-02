class Solution {
public:
    int numberOfGasStationsRequired(vector<int>& stations, double dist) {
        int cnt = 0;

        for(int i = 0; i < stations.size() - 1; i++) {
            double gap = stations[i + 1] - stations[i];

            int numberInBetween = gap / dist;

            if(gap == numberInBetween * dist)
                numberInBetween--;

            cnt += numberInBetween;
        }

        return cnt;
    }

    double minMaxDist(vector<int>& stations, int K) {

        double low = 0;
        double high = 0;

        for(int i = 0; i < stations.size() - 1; i++) {
            high = max(high, (double)(stations[i + 1] - stations[i]));
        }

        while(high - low > 1e-6) {
            double mid = (low + high) / 2.0;

            if(numberOfGasStationsRequired(stations, mid) > K)
                low = mid;
            else
                high = mid;
        }

        return high;
    }
};
