class Solution {
  public:
    void helper(stack<int> &stk, int top){
        if(stk.empty() || top > stk.top()){
            stk.push(top);
            return;
        }
        int x = stk.top();
        stk.pop();
        helper(stk,top);
        stk.push(x);
    }
    void sortStack(stack<int> &st) {
        // code here
        stack<int> stk;
        while(!st.empty()){
            int top = st.top();
            st.pop();
            if(!stk.empty() && top < stk.top()){
                helper(stk,top);
            }
            else stk.push(top);
        }
        st = stk;
    }
};
