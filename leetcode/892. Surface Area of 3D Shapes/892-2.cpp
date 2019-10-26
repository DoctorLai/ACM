// https://helloacm.com/how-to-compute-the-surface-area-of-3d-shapes-cubes-placed-on-grid-cells/
// https://leetcode.com/problems/surface-area-of-3d-shapes/
// EASY, GEOMETRY, COUNTING

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int N = grid.size();
        int ans = 0;
        for (int r = 0; r < N; ++ r) {
            for (int c = 0; c < N; ++ c) {
                if (grid[r][c] > 0) {
                    ans += 4 * grid[r][c] + 2;
                    if (r > 0) ans -= min(grid[r][c], grid[r - 1][c]) * 2;
                    if (c > 0) ans -= min(grid[r][c], grid[r][c - 1]) * 2;
                }
            }
        }
        return ans;
    }
};
