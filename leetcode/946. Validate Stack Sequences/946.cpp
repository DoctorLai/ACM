// https://helloacm.com/greedy-algorithm-to-validate-stack-sequences/
// https://leetcode.com/problems/validate-stack-sequences/
// MEDIUM, STACK, GREEDY

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i = 0;
        for (const auto &n: pushed) {
            st.push(n);
            while (!st.empty() && st.top() == popped[i]) {
                st.pop();
                i ++;
            }
        }
        return i == pushed.size();
    }
};
