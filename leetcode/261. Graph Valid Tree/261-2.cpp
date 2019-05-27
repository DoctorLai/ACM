// https://helloacm.com/algorithms-to-check-if-a-graph-is-a-valid-tree-by-using-disjoint-set-union-find-and-breadth-first-search/
// https://leetcode.com/problems/graph-valid-tree/

class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {       
        if (n - 1 != edges.size()) return false;
        vector<int> parent(n);
        for (int i = 0; i < n; ++ i) {
            parent[i] = i;
        }
        for (const auto &e: edges) {
            int x = find(parent, e[0]);
            int y = find(parent, e[1]);
            // if parents are equal, we know there is a cycle.
            if (x == y) return false;
            // make two nodes same parent (group)
            parent[x] = y;        
        }
        return true;
    }
    
private:
    int find(vector<int> &parent, int i) {
        while (i != parent[i]) {
            parent[i] = parent[parent[i]];
            i = parent[i];
        }
        return i;
    }
};
