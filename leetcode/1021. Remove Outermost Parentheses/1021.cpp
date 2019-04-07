// https://helloacm.com/c-algorithm-to-remove-outermost-parentheses/
// https://leetcode.com/problems/remove-outermost-parentheses/

class Solution {
public:
    string removeOuterParentheses(string S) {
        string r = "", cur = "";
        int depth = 0;
        for (int i = 0; i < S.size(); ++ i) {
            if (S[i] == '(') {
                depth ++;
                if (depth > 1) {
                    cur += "(";
                }
            } else {
                depth --;
                if (depth == 0) {
                    r += cur;
                    cur = "";
                } else {
                    cur += ")";
                }
            }
        } 
        return r;
    }
};
