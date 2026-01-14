class Solution {
public:
    bool helperFunc(string& s, vector<string>& wordDict, string& curr, int idx, int n, vector<int>& visited) {
        if(idx == s.length()) return true;
        if(visited[idx] == 1) return false;
        for(string& word : wordDict) {
            int len = word.length();
            if(idx + len<=s.length() && s.substr(idx,len) == word){
                if(helperFunc(s,wordDict,curr,idx + len,n,visited)) return true;
            }
        }
        visited[idx] = 1;
        return false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        string curr;
        int n = s.size();
        vector<int> visited(s.size(), 0);
        if(helperFunc(s,wordDict,curr,0,n,visited)) return true;
        return false;
    }
};
