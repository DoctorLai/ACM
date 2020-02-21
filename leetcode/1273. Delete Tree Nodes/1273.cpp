// https://helloacm.com/using-depth-first-search-algorithm-to-delete-tree-nodes-with-sum-zero-in-the-sub-tree/
// https://leetcode.com/problems/delete-tree-nodes/

class Solution {
public:
    int deleteTreeNodes(int nodes, vector<int>& parent, vector<int>& value) {
        vector<vector<int>> g(nodes, vector<int>(0));
        for (int i = 0; i < nodes; ++ i) {
            if (parent[i] == -1) continue;
            g[parent[i]].push_back(i);
        }
        return dfs(g, 0, value)[1];
    }
private:
    vector<int> dfs(const vector<vector<int>> &g, int root, const vector<int>& value) {
        int sum = value[root];
        int remain = 1;
        for (const auto &child: g[root]) {
            vector<int> r = dfs(g, child, value);
            remain += r[1];
            sum += r[0];
        }
        if (sum == 0) remain = 0;
        return {sum, remain};
    }
};
