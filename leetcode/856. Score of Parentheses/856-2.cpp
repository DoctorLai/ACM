// https://helloacm.com/several-algorithms-to-compute-the-score-of-parentheses/
// https://leetcode.com/problems/score-of-parentheses/

class Solution {
public:
    int scoreOfParentheses(string S) {
        return score(S, 0, S.size());
    }
 
private:
    int score(string S, int i, int j) {
        int ans = 0, bal = 0;
        for (int k = i; k < j; ++ k) {
            bal += (S[k] == '(') ? 1 : - 1;
            if (bal == 0) {
                if (k - i == 1) {
                    // special case () = 1
                    ans ++;
                } else {
                    // otherwise (A) = 2 * A
                    ans += 2 * score(S, i + 1, k);
                }
                // move cursor to the end of A                    
                i = k + 1;
            }
        }
        return ans;
    }
};
