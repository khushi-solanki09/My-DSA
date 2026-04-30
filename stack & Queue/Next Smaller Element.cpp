class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        
        for(int i = n - 1; i >= 0; i--){
            int num = arr[i];
            while(!st.empty() && num <= st.top()) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(num);
        }
        return ans;
    }
};
