// https://helloacm.com/how-to-generate-parentheses-using-bruteforce-or-depth-first-search-backtracking-algorithms/
// https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> r;        
        dfs(r, 0, 0, n, "");
        return r;
    }
    
private:
    void dfs(vector<string> &res, int open, int close, int n, string cur) {
        if (cur.size() == 2 * n) {
            res.push_back(cur);
            return;
        }
        if (open < n) {
            dfs(res, open + 1, close, n, cur + "(");
        }
        if (close < open) { // the close Parentheses should be less than the opening Parentheses
            dfs(res, open, close + 1, n, cur + ")");
        }
    }
};
