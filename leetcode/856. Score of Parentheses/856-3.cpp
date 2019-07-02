// https://helloacm.com/several-algorithms-to-compute-the-score-of-parentheses/
// https://leetcode.com/problems/score-of-parentheses/

class Solution {
public:
    int scoreOfParentheses(string S) {
        int ans = 0;
        int bal = 0;
        char prev = ' ';
        for (const auto &n: S) {
            if (n == '(') {
                bal ++;
            } else {            
                bal --;
                if (prev == '(') {
                    ans += 1 << bal;
                }
            }
            prev = n;
        }
        return ans;
    }
};
