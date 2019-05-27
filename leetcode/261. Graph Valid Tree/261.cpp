// https://helloacm.com/algorithms-to-check-if-a-graph-is-a-valid-tree-by-using-disjoint-set-union-find-and-breadth-first-search/
// https://leetcode.com/problems/graph-valid-tree/

class Solution {
public:
    bool validTree(int n, vector<vector <int>>& edges) {       
        if (n - 1 != edges.size()) return false;
        if (edges.size() == 0) return true;
        vector<bool> v(n, false);
        vector<unordered_set<int>> g(n); // adjacency matrix
        for (const auto &e: edges) {
            g[e[0]].insert(e[1]);
            g[e[1]].insert(e[0]);
        }
        queue<int> Q;
        Q.push(edges[0][0]);
        while (!Q.empty()) {
            auto p = Q.front();
            Q.pop();
            for (const auto x: g[p]) {
                if (!v[x]) {
                    Q.push(x);
                    v[x] = true;
                }
            }
        }
        for (const auto &n: v) {
            if (!n) return false;
        }
        return true;
    }
};
