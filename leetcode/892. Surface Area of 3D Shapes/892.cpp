// https://helloacm.com/how-to-compute-the-surface-area-of-3d-shapes-cubes-placed-on-grid-cells/
// https://leetcode.com/problems/surface-area-of-3d-shapes/
// EASY, GEOMETRY, COUNTING

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int dr[4] = {0, 1, 0, -1};
        int dc[4] = {1, 0, -1, 0};
        int N = grid.size();
        int ans = 0;
        for (int r = 0; r < N; ++ r) {
            for (int c = 0; c < N; ++ c) {
                if (grid[r][c] > 0) {
                    ans += 2;
                    for (int k = 0; k < 4; ++ k) {
                        int nr = r + dr[k];
                        int nc = c + dc[k];
                        int nv = 0;
                        if ((0 <= nr) && (0 <= nc) && 
                            (nr < N) && (nc < N)) {
                            nv = grid[nr][nc];
                        }
                        ans += max(grid[r][c] - nv, 0);
                    }
                }
            }
        }
        return ans;
    }
};
