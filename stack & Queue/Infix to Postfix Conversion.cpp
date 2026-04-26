class Solution {
  public:
    int precedence(char &str) {
        if(str == '^') return 3;
        if(str == '/' || str == '*') return 2;
        if(str == '+' || str == '-') return 1;
        return 0;
    }
    string infixToPostfix(string& s) {
        // code here
        string post = "";
        stack<char> st;
        for(int i = 0; i<s.length(); i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                post += s[i];
            }
            else if(s[i] == '(') st.push(s[i]);
            else if(s[i] == ')'){
                while(st.top() != '('){
                    post += st.top();
                    st.pop();
                }
                st.pop();
                }
                else{
                while(!st.empty() && st.top()!='(' && (precedence(st.top()) > precedence(s[i]) || (precedence(st.top()) == precedence(s[i]) && s[i] != '^'))) {
                post += st.top();
                st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            post += st.top();
            st.pop();
        }
        return post;
    }
};
