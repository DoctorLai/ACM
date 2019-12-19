// https://helloacm.com/compute-the-sequential-digits-within-a-range-using-dfs-bfs-or-bruteforce-algorithms/
// https://leetcode.com/problems/sequential-digits/
// MEDIUM, DFS

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        for (int i = 1; i <= 9; ++ i) {
            vector<int> v = dfs(low, high, i);
            if (!v.empty()) {
                res.insert(res.end(), begin(v), end(v));
            }
        }
        sort(begin(res), end(res));
        return res;
    }
    
private:
    vector<int> dfs(int low, int high, int cur = 0) {
        vector<int> res;
        if (cur >= low && cur <= high) {
            res.push_back(cur);
        }
        if (cur >= high) {
            return res;
        }
        int x = cur % 10;
        if (x != 9) {
            vector<int> v = dfs(low, high, cur * 10 + x + 1);
            if (!v.empty()) {
                res.insert(res.end(), begin(v), end(v));
            }
        }
        return res;
    }    
};
