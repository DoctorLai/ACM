// https://helloacm.com/how-to-generate-parentheses-using-bruteforce-or-depth-first-search-backtracking-algorithms/
// https://leetcode.com/problems/generate-parentheses/

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> r;        
        string cur(n * 2, ' ');
        dfs(r, cur, 0);
        return r;
    }
    
private:
    void dfs(vector<string> &res, string &cur, int pos) {
        if (pos == cur.size()) {
            if (isValidParentheses(cur)) {
                res.push_back(cur);
            }
        } else {
            cur[pos] = '(';
            dfs(res, cur, pos + 1);
            cur[pos] = ')';
            dfs(res, cur, pos + 1);
        }
        
    }
    
    bool isValidParentheses(const string &s) {
        int balance = 0;
        for (int i = 0; i < s.size(); ++ i) {
            if (s[i] == '(') {
                balance ++;
            } else {
                balance --;
                if (balance < 0) {
                    return false;
                }
            }
        }
        return balance == 0;
    }
};
