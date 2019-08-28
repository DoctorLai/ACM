// https://helloacm.com/how-to-construct-minimum-spanning-tree-using-kruskal-or-breadth-first-search-algorithm/
// https://leetcode.com/problems/connecting-cities-with-minimum-cost/

class Solution {
public:
    int minimumCost(int N, vector<vector<int>>& connections) {
        int totalCost = 0;
        vector<int> parent(N + 1);
        for (int i = 0; i <= N;  ++ i) {
            parent[i] = i;
        }
        sort(begin(connections), end(connections), [](auto &a, auto &b) {
            return a[2] < b[2];
        });
        for (const auto &c: connections) {
            int x = c[0];
            int y = c[1];
            if (!connected(x, y, parent)) {
                union_sets(x, y, parent);
                totalCost += c[2];
            }
        }
        int c = 0;
        for (int i = 1; i <= N; ++ i) {
            if (parent[i] == i) {
                c ++;
            }
        }
        return c == 1 ? totalCost : -1;
    }
    
private:
    bool connected(int x, int y, vector<int> &parent) {
        return find(x, parent) == find(y, parent);
    }
    
    int find(int x, vector<int> &parent) {
        while (parent[x] != x) {
            parent[x] = parent[parent[x]];
            x = parent[x];
        }
        return x;
    }
    
    void union_sets(int x, int y, vector<int> &parent) {
        int px = find(x, parent);
        int py = find(y, parent);        
        if (px != py) {
            parent[px] = py;
        }
    }
};
