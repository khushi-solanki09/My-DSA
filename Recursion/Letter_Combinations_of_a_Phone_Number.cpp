class Solution {
public:
    void helperFunc(unordered_map<char,string>& mpp ,vector<string>& ans ,string& d ,string& s ,int idx) {
        if(idx == d.size()){
            ans.push_back(s);
            return;
        }
        string letter = mpp[d[idx]];
        for(int i = 0; i<letter.size(); i++) {
            s.push_back(letter[i]);
            helperFunc(mpp,ans,d,s,idx+1);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> mpp{
           {'1' , " "},
            {'2' , "abc"},
            {'3' , "def"},
            {'4' , "ghi"},
            {'5' , "jkl"},
            {'6' , "mno"},
            {'7' , "pqrs"},
            {'8' , "tuv"},
            {'9' , "wxyz"}
        };
        vector<string> ans;
        string s = "";
        helperFunc(mpp,ans,digits,s,0);
        return ans;

    }
};
