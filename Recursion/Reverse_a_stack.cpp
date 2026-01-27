class Solution {
  public:
    void insertAtBottom(stack<int> &st,int top){
        if(st.empty()) {
            st.push(top);
            return;
        }
        int x = st.top();
        st.pop();
        insertAtBottom(st,top);
        st.push(x);
    }
    void reverseStack(stack<int> &st) {
        // code here
        // Approach 1 ------------>
        // stack<int> s;
        // while(!st.empty()){
        //     int x = st.top();
        //     st.pop();
        //     s.push(x);
        // }
        // st = s;
        if(st.empty()) return;
        int x = st.top();
        st.pop();
        reverseStack(st);
        insertAtBottom(st,x);
        
    }
};
