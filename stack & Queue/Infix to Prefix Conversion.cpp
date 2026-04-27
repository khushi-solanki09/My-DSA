class Solution {
  public:
    int precedence(char &str) {
        if(str == '^') return 3;
        if(str == '/' || str == '*') return 2;
        if(str == '+' || str == '-') return 1;
        return 0;
    }
    string infixToPrefix(string &s) {
        // code here
       string pre = "";
        stack<char> st;
        for(int i = s.length() - 1; i>=0; i--){
            if(isalpha(s[i]) || isdigit(s[i])){
                pre += s[i];
            }
            else if(s[i] == ')') st.push(s[i]);
            else if(s[i] == '('){
                while(!st.empty() && st.top() != ')'){
                    pre += st.top();
                    st.pop();
                }
                if(!st.empty()) st.pop();
                }
                else{
                while(!st.empty() && st.top()!=')' && (precedence(st.top()) > precedence(s[i]) 
                || (precedence(st.top()) == precedence(s[i]) && s[i] == '^'))) {
                pre += st.top();
                st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            pre += st.top();
            st.pop();
        }
        reverse(pre.begin(), pre.end());
        return pre;
    }
};
