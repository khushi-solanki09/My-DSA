// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        // code here
        int csum = 0, cstart = 0;
        int beststart = -1, bestend = -1;
        int maxisum = 0;
        int clen = 0;
        for(int i = 0; i<arr.size(); i++) {
            if(arr[i] < 0) {
                csum = 0;
                cstart = i + 1;
            }
            else{
                csum += arr[i];
                int clen = i - cstart + 1;
                int bestlen = bestend - beststart + 1;
                if(csum > maxisum || csum == maxisum && clen > bestlen) {
                    maxisum = csum;
                    beststart = cstart;
                    bestend = i;
                }
            
            }
        }
        if(beststart == -1) return {-1};
        vector<int> result;
        for(int i = beststart; i<=bestend; i++) {
            result.push_back(arr[i]);
        }
        return result;
    }
};
