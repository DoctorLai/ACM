// https://helloacm.com/several-algorithms-to-compute-the-score-of-parentheses/
// https://leetcode.com/problems/score-of-parentheses/

class Solution {
public:
    int scoreOfParentheses(string S) {
        if (S == "") return 0;
        if (S == "()") return 1;
        int n = S.size();
        int i = 0, k = 0;
        while (i < n) {
            if (S[i] == '(') {
                k ++;
            } else {
                k --;
            }
            // the rightmost matching closed Parentheses 
            if (k == 0) {
                break;
            }
            i ++;
        }
        // get A where A is in (A)
        string ls = S.substr(1, i - 1);        
        // deal with special case (), otherwise recursively compute the score of A
        int left = (ls == "") ? 1 : (2 * scoreOfParentheses(ls));
        // the right substring B, can be computed recursively.
        int right = (i + 1 < n) ? scoreOfParentheses(S.substr(i + 1)) : 0;
        // A+B
        return left + right;            
    }
};
