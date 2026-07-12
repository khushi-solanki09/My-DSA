class Solution {
public:
    // static bool cmp(pair<char,int>& a, pair<char,int>& b) {
    //     return a.second > b.second;
    // }
    string frequencySort(string s) {
        unordered_map<char, int> mpp;
        int n = s.length();
        for(auto& i : s){
            mpp[i]++;
        }
        // vector<pair<char,int>> p(mpp.begin(),mpp.end());
        // sort(p.begin(), p.end(), cmp);
        // string ans = "";
        // for(auto& i : p) {
        //     ans += string(i.second, i.first);
        // }
        // return ans;

        vector<string> bucket(n + 1);
        for(auto& i : mpp) {
            bucket[i.second] += i.first;
        }
        string ans = "";
        for(int i = n; i>=1; i--) {
             for (char ch : bucket[i]) {
                ans += string(i, ch);
            }
        }
        return ans;
    }
};
