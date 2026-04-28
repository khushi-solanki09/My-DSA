class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> st;
        unordered_map<int,int> mp;
        for(int i = nums2.size() - 1; i >= 0; --i) {
            int num = nums2[i];
            while(!st.empty() && st.top() <= num){
                st.pop();
            }
            mp[num] = st.empty() ? -1 : st.top();
            st.push(num);
        }
        for(int num : nums1) {
            ans.push_back(mp[num]);
        }
        return ans;
    }
};
