// https://helloacm.com/how-to-check-if-word-is-valid-after-substitutions-using-stack-or-recursion/
// https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/
// MEDIUM, STACK

class Solution {
public:
    bool isValid(string S) {
        stack<string> st;
        for (const auto &n: S) {
            if (n == 'a') {
                st.push("a");
            } else if (n == 'b') {
                if (st.empty()) return false;
                auto p = st.top();
                st.pop();
                if (p.back() != 'a') return false;
                st.push("ab");
            } else {
                if (st.empty()) return false;
                auto p = st.top();
                st.pop();
                if (p.back() != 'b') return false;
            }
        }
        return st.empty();
    }
};
