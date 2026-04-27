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
    string postToInfix(string &exp) {
        // Write your code here
        stack<string> st;
        for(int i = 0; i <= exp.length(); i++) {
            if(isalpha(exp[i])){
                st.push(string(1,exp[i]));
            }
            else if(isoperator(exp[i])){
                string str1 = st.top();
                st.pop();
                string str2 = st.top();
                st.pop();
                string str3 = '(' + str2 + exp[i] + str1 + ')';
                st.push(str3);
            }
        }
        return st.top();
    }
};
