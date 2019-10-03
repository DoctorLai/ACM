// https://helloacm.com/how-to-reverse-substrings-between-each-pair-of-parentheses-using-stack/
// https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/

class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string cur = "";
        for (int i = 0; i < s.size(); ++ i) {            
            if (s[i] == '(') {
                st.push(cur);
                cur = "";
            } else if (s[i] == ')') {
                std::reverse(begin(cur), end(cur));
                string s = st.top();
                st.pop();
                cur = s + cur;
            } else {
                cur += s[i];
            }
        }
        return cur;
    }
};
