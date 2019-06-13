// https://helloacm.com/algorithms-to-compute-the-factor-combinations-for-an-integer-using-dfs-and-bfs/
// https://leetcode.com/problems/factor-combinations/

class Solution {
public:
    vector<vector<int>> getFactors(int n) {
        dfs(n, {});        
        // remove the [n] factor
        if (!r.empty()) r.erase(end(r), end(r) + 1);
        return r;
    }
private:
    void dfs(int n, vector<int> cur) {
        if (n == 1) {
            if (!cur.empty()) r.push_back(cur);
            return;
        }
        int k = 2;
        if (!cur.empty()) {
            k = max(k, cur.back());
        }
        for (int i = k; i <= n; ++ i) {
            if ((n % i) == 0) { // current is a factor
                cur.push_back(i);
                dfs(n / i, cur); 
                cur.pop_back();
            }
        }
    }
    vector<vector<int>> r;
};
