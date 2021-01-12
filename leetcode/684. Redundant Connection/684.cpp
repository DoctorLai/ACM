// https://helloacm.com/algorithm-to-remove-a-redundant-connection-from-a-undirected-graph-to-make-a-valid-tree-using-union-find-disjoint-set/
// https://leetcode.com/problems/redundant-connection/
// MEDIUM, UNION FIND

class DSU {
public:
    DSU(int n) {
        data.resize(n);
        iota(begin(data), end(data), 0);
        rank.resize(n, 0);
    }
    
    int find(int x) {
        if (x != data[x]) {
            data[x] = find(data[x]);
        }
        return data[x];
    }
    
    bool join(int x, int y) {
        int px = find(x);
        int py = find(y);
        if (px == py) return false;
        if (rank[px] > rank[py]) {
            data[py] = px;
        } else if (rank[py] > rank[px]) {
            data[px] = py;
        } else {
            data[px] = py;
            ++ rank[px];
        }
        return true;
    }
    
private:
    vector<int> data;
    vector<int> rank;
};

class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        DSU dsu(edges.size() + 1);
        for (const auto &e: edges) {
            if (!dsu.join(e[0], e[1])) {
                return e;
            }
        }
        return {};
    }
};
