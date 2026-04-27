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
    string postToPre(string post) {
        // Write your code here
        stack<string> st;
        for(int i = 0; i <= post.length(); i++) {
            if(isalpha(post[i])){
                st.push(string(1,post[i]));
            }
            else if(isoperator(post[i])){
                string str1 = st.top();
                st.pop();
                string str2 = st.top();
                st.pop();
                string str3 = post[i] + str2 + str1;
                st.push(str3);
            }
        }
        return st.top();
    }
};
