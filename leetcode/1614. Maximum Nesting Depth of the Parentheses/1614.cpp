// https://helloacm.com/algorithm-to-compute-the-maximum-nesting-depth-of-the-parentheses/
// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
// EASY, STRING

class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, bal = 0;
        for (const auto &n: s) {
            if (n == '(') {
                ans = max(ans, ++ bal);
            } else if (n == ')') {
                bal --;
            }
        }
        return ans;
    }
};