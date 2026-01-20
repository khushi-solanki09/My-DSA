class Solution {
public:
   void backtrack(int open, int close, int n, string curr, vector<string> &ans) {
        if (curr.length() == 2 * n) {
            ans.push_back(curr);
            return;
        }

        if (open < n) {
            backtrack(open + 1, close, n, curr + "(", ans);
        }

        if (close < open) {
            backtrack(open, close + 1, n, curr + ")", ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(0, 0, n, "", ans);
        return ans;
    }
};
