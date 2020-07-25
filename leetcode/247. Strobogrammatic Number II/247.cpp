// https://helloacm.com/depth-first-search-algorithm-to-find-the-strobogrammatic-number-of-given-length/
// https://leetcode.com/problems/strobogrammatic-number-ii/
// MEDIUM, RECURSION

class Solution {
public:
    vector<string> findStrobogrammatic(int n) {
        dfs(0, n - 1, string(n, ' '));
        return res;
    }
    
private:
    vector<string> res;
    
    void dfs(int left, int right, string cur) {
        if (left > right) {
            if ((cur.size() > 1) && (cur[0] == '0')) return;
            res.push_back(cur);
            return;
        }
        for (const auto &s: {'0', '1', '8'}) {
            cur[left] = s;
            cur[right] = s;
            dfs(left + 1, right - 1, cur);
        }
        if (left < right) {
            for (const auto &s: {'6', '9'}) {
                cur[left] = s;
                cur[right] = s == '6' ? '9' : '6';
                dfs(left + 1, right - 1, cur);
            }        
        }
    }   
}
