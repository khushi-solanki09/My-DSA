class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Buy = prices[0];
        int maxProfit = 0;
        for(int i=1;i<prices.size();i++){
            if(Buy > prices[i]) {
                Buy = prices[i];
            }
            else {
                maxProfit = max(maxProfit,prices[i]-Buy);
            }
        }
        return maxProfit;
    }
};  
