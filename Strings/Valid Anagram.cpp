class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char32_t, int> freq;
        for(int i=0; i<s.length(); i++) {
            freq[s[i]]++;
            freq[t[i]]--; 
        }
        for(auto& i : freq) {
            if(i.second != 0) return false;
        }
        return true;
    }
};
