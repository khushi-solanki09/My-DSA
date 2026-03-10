class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=0;i<numRows;i++){
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++){
                int ans = result[i-1][j] + result[i-1][j-1];
                row[j] = ans;
            }
            result.push_back(row);
        }
        return result;
    }
};
