// https://helloacm.com/several-algorithms-to-compute-the-score-of-parentheses/
// https://leetcode.com/problems/score-of-parentheses/

class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<int> st;
        st.push(0);
        for (const auto &n: S) {
            if (n == '(') {
                st.push(0);
            } else {
                int v = st.top();
                st.pop();
                int w = st.top();
                st.pop();
                st.push(w + max(2 * v, 1));
            }
        }
        return st.top();
    }
};
