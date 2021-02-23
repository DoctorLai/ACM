// https://binarysearch.com/problems/Spiral-Matrix
// https://helloacm.com/construct-a-spiral-matrix-using-simulation-algorithm/
// MEDIUM, SIMULATION

vector<int> solve(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    if (0 == rows) return {};
    int cols = matrix[0].size();
    if (0 == cols) return {};
    vector<int> ans;    
    int r = 0, c = 0, n = rows * cols - 1;
    bool vis[rows][cols];
    memset(vis, false, sizeof vis);
    vector<int> dir{0, 1, 0, -1, 0};
    int di = 0;
    for (; n > 0; -- n) {
        ans.push_back(matrix[r][c]);
        vis[r][c] = true;                
        for (;;) {
            int nr = r + dir[di];
            int nc = c + dir[di + 1];
            if ((nr >= 0) && (nc >= 0) && (nr < rows) && (nc < cols) && (!vis[nr][nc])) {
                r = nr;
                c = nc;
                break;
            } else {
                di = (di + 1) % 4;
            }
        }
    }
    ans.push_back(matrix[r][c]);
    return ans;
}
