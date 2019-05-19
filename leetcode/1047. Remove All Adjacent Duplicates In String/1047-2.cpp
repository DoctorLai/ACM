// https://helloacm.com/algorithms-to-remove-all-adjacent-duplicates-in-a-string/
// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> st;
        for (const auto &n: S) {
            if (st.empty()) {
                st.push(n);
            } else if (st.top() == n) {
                st.pop();
            } else {
                st.push(n);
            }
        }
        string s = "";
        while (!st.empty()) {
            s = st.top() + s;
            st.pop();
        }
        return s;
    }
};
