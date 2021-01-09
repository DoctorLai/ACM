// https://helloacm.com/algorithms-to-reverse-a-graph-adjacency-list/
// https://binarysearch.com/problems/Reverse-Graph
// MEDIUM, GRAPH

vector<vector<int>> solve(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<vector<int>> ans(n);
    for (int i = 0; i < n; ++i) {
        for (auto& j : graph[i]) {
            ans[j].push_back(i);
        }
    }
    return ans;
}
