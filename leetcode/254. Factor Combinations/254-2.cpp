// https://helloacm.com/algorithms-to-compute-the-factor-combinations-for-an-integer-using-dfs-and-bfs/
// https://leetcode.com/problems/factor-combinations/

class Solution {
public:
    vector<vector<int>> getFactors(int n) {
        queue<pair<int, vector<int>>> Q;
        Q.push({n, {}});
        vector<vector<int>> r;
        while (!Q.empty()) {
            auto p = Q.front();
            Q.pop();
            int k = 2;
            if (!p.second.empty()) {
                k = max(k, p.second.back());
            }
            for (int i = k; i <= p.first; ++ i) {
                if (p.first % i == 0) {
                    vector<int> next(p.second);
                    next.push_back(i);
                    if (p.first / i == 1) { // the last factor
                        if (next[0] != n) {
                            r.push_back(next);
                        }
                    } else {
                        Q.push({p.first / i, next});
                    }
                }
            }
        }
        return r;
    }
};
