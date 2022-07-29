// https://binarysearch.com/problems/Shortest-Path-in-a-Graph

int solve(vector<vector<int>>& edges, int start, int end) {
    using PII = pair<int, int>;
    unordered_map<int, vector<PII>> G;    
    for (auto &e: edges) {
        G[e[0]].push_back({e[1], e[2]});        
    }
    int N = 0;
    for (auto &e: edges) {
        N = max(N, max(e[0], e[1]));
    }
    N ++;

    function<int(int, int)> floyd = [&](int s, int e) -> int {
        if (s == e) {
            return 0;
        }
        int n = N; // number of vertice
        vector<vector<int>> GG(n, vector<int>(n, INT_MAX));
        for (auto &e: edges) {
            GG[e[0]][e[1]] = e[2];
        }
        for (int k = 0; k < n; ++ k) {
            for (int i = 0; i < n; ++ i) {
                for (int j = 0; j < n; ++ j) {
                    if (GG[i][k] != INT_MAX && GG[k][j] != INT_MAX) {
                        GG[i][j] = min(GG[i][j], GG[i][k] + GG[k][j]);
                    }
                }
            }
        }
        return GG[s][e] == INT_MAX ? -1 : GG[s][e];
    };

    function<int(int, int)> spfa = [&](int s, int e) -> int {
        deque<int> Q({s});
        unordered_map<int, int> d;
        d[s] = 0;
        while (!Q.empty()) {
            auto c = Q.front();
            Q.pop_front();
            for (auto [to, w]: G[c]) {
                int dto = d.count(to) ? d[to] : INT_MAX;
                if (d[c] + w < dto) {
                    d[to] = d[c] + w;
                    if (std::find(Q.begin(), Q.end(), to) == Q.end()) {
                        Q.push_back(to);
                    }
                }
            }
        }
        return d.count(e) ? d[e] : -1;
    };

    function<int(int, int)> ucs = [&](int s, int e) -> int {        
        priority_queue<PII, vector<PII>, std::greater<PII>> Q;
        Q.push({0, s});
        unordered_set<int> seen;
        while (!Q.empty()) {
            auto [c, v] = Q.top();
            Q.pop();                      
            if (v == e) {
                return c;
            }
            if (seen.count(v)) {
                continue;
            }
            seen.insert(v);
            for (auto &[x, w]: G[v]) {
                Q.push({c + w, x});
            }
        }
        return -1;
    };

    function<int(int, int)> dijkstra = [&](int s, int e) -> int {
        unordered_map<int, int> dist;
        dist[s] = 0;
        priority_queue<PII, vector<PII>, greater<PII>> Q;
        Q.push({0, s});
        unordered_set<int> seen;
        while (!Q.empty()) {
            auto [d, v] = Q.top();
            Q.pop();
            if (seen.count(v)) {
                continue;
            }
            seen.insert(v);
            for (auto [x, w]: G[v]) {
                int dx = dist.count(x) ? dist[x] : INT_MAX;
                if (d + w < dx) {
                    dist[x] = d + w;
                    Q.push({d + w, x});
                }
            }
        }
        return dist.count(e) && dist[e] < INT_MAX ? dist[e] : -1;
    };

    return dijkstra(start, end);
}
