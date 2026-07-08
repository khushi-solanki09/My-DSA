class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int maxi = 0;

        string ans = strs[0];
        for(int i = 1; i<n; i++) {
            int j = 0;
            while(j < strs[i].length() && j < ans.length() && ans[j] == strs[i][j]){
                j++;
            }
            ans = ans.substr(0, j);
            if(ans.empty()) return "";
        }
        return ans;
    }
};
