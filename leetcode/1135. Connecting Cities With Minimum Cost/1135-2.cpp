// https://helloacm.com/how-to-construct-minimum-spanning-tree-using-kruskal-or-breadth-first-search-algorithm/
// https://leetcode.com/problems/connecting-cities-with-minimum-cost/

class Solution {
public:
    int minimumCost(int N, vector<vector<int>>& connections) {
        int mincost = 0;
        vector<vector<pair<int, int>>> g(N + 1);
        vector<bool> vis(N + 1);
        for (const auto &c: connections) {
            g[c[0]].push_back({ c[2], c[1] });
            g[c[1]].push_back({ c[2], c[0] });
        }
        auto cmp = [](pair<int, int> a, pair<int, int> b) {
            return a.first > b.first;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> q(cmp);
        q.push({0, 1}); 
        while(!q.empty()) {
            int x = q.top().second; // city
            int w = q.top().first;  // cost
            q.pop();
            if(vis[x]) continue;
            mincost += w;
            vis[x] = true;
            for(int i = 0, sz = g[x].size(); i < sz; i++) {
                if(!vis[g[x][i].second]) {
                    q.push(g[x][i]);
                }
            }
         }
         for (int i = 1; i <= N; i++) {
            if (!vis[i]) return -1;
         }
         return mincost;
    }
};
