// https://helloacm.com/flood-fill-algorithm-using-breadth-first-search/
// https://binarysearch.com/problems/Paint-Bucket
// MEDIUM, BFS

vector<vector<string>> solve(vector<vector<string>>& matrix, int r, int c, string target) {
    int rows = matrix.size();
    if (0 == rows) return matrix;
    int cols = matrix[0].size();
    if (0 == cols) return matrix;
    unordered_set<string> vis;
    queue<vector<int>> Q;
    Q.push({r, c});
    vector<int> d{1, 0, -1, 0, 1};
    auto cur = matrix[r][c];
    while (!Q.empty()) {
        auto p = Q.front();
        Q.pop();
        auto key = std::to_string(p[0]) + "," + std::to_string(p[1]);
        if (vis.count(key)) continue;
        vis.insert(key);  
        matrix[p[0]][p[1]] = target;
        for (int i = 0; i < 4; ++ i) {
            int nx = p[0] + d[i];
            int ny = p[1] + d[i + 1];
            if ((nx >= 0) && (ny >= 0) && (nx < rows) && (ny < cols) && (matrix[nx][ny] == cur)) {
                Q.push({nx, ny});
            }
        }
    }
    return matrix;
}
