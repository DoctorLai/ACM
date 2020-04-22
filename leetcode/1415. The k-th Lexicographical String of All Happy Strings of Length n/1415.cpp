// https://helloacm.com/depth-first-search-algoritm-to-compute-the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/
// https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/
// MEDIUM, DFS, RECURSION

class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string> result;
        dfs(result, "", n);
        if (k <= result.size()) return result[k - 1];
        return "";
    }
private:
    void dfs(vector<string> &result, string cur, int n) {
        if (cur.size() == n) {
            result.push_back(cur);
            return;
        }
        char last = (cur == "") ? ' ' : cur.back();
        for (char x = 'a'; x <= 'c'; x ++) {
            if (x != last) {
                dfs(result, cur + x, n);
            }
        }
    }
};
