class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string str = "";
        for(int i = 0; i<s.size(); i++) {
            if(cnt == 0) {
                cnt++;
            }
            else{
                if(s[i] == '(') {
                    cnt++;
                }
                else if(s[i] == ')' && cnt == 1) {
                    cnt--;
                    continue;
                }
                else cnt--;
                str += s[i];
            }
        }
        return str;
    }
};
