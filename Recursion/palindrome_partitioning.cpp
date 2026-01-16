class Solution {
public:
    bool isValidPalindrome(string& s ,int left ,int right) {
        while(left < right) {
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
    void helperFunc(string& s ,vector<vector<string>>& ans ,vector<string>& curr ,int idx){
        if(idx == s.size()){
            ans.push_back(curr);
            return;
        }
        for(int i = idx; i<s.size(); i++) {
            if(isValidPalindrome(s,idx,i)){
                curr.push_back(s.substr(idx,i - idx + 1));
                helperFunc(s,ans,curr,i + 1);
                curr.pop_back();
            }
             
           
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> curr;
        helperFunc(s,ans,curr,0);
        return ans;
    }
};
