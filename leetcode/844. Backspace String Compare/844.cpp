// https://helloacm.com/the-backspace-string-compare-algorithm/
// https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> st1 = realString(S);
        stack<char> st2 = realString(T);
        if (st1.size() != st2.size()) return false;
        while (st1.size() > 0) {
            char p1 = st1.top();
            char p2 = st2.top();
            st1.pop();
            st2.pop();
            if (p1 != p2) return false;
        }
        return true;
    }
    
private:
    stack<char> realString(string S) {
        stack<char> st;    
        for (int i = 0; i < S.size(); ++ i) {
            if (S[i] == '#') {
                if (st.size() > 0) {
                    st.pop();
                }
            } else {
                st.push(S[i]);
            }
        }
        return st;
    }
};
