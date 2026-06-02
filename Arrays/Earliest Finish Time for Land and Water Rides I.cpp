class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
         int mini = INT_MAX;

        for(int i = 0; i < ls.size(); i++) {
            for(int j = 0; j < ws.size(); j++) {
                int minil = ls[i] + ld[i];
                int sum1 = max(minil, ws[j]) + wd[j];
                int miniw = ws[j] + wd[j];
                int sum2 = max(miniw, ls[i]) + ld[i];

                mini = min(mini, min(sum1, sum2));
            }
        }

        return mini;
    }
};
