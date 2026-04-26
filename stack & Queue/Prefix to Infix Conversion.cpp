// User function Template for C++

class Solution {
  public:
    bool isoperator(char &str) {
        switch(str) {
            case '+':
            case '-':
            case '*':
            case '/':
            case '%':
            case '^':
                return true;
        }
        return false;
    }
    string preToInfix(string pre) {
        // Write your code here
        stack<string> st;
        for(int i = pre.length(); i >= 0; i--) {
            if(isalpha(pre[i])){
                st.push(string(1,pre[i]));
            }
            else if(isoperator(pre[i])){
                string str1 = st.top();
                st.pop();
                string str2 = st.top();
                st.pop();
                string str3 = "(" + str1 + pre[i] + str2 + ")";
                st.push(str3);
            }
        }
        return st.top();
    }
};
