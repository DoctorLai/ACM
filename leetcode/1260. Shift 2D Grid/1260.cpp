// https://leetcode.com/problems/shift-2d-grid/
// https://helloacm.com/algorithms-to-shift-a-2d-grid-matrix-in-place/
// EASY, SIMULATION, GRID

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        for (int i = 0; i < k; ++ i) {
            int n = grid.size();
            int m = grid[0].size();
            int last = grid[n - 1][m - 1];
            for (int i = m * n - 1; i > 0; -- i) {
                int row = i / m;
                int col = i % m;
                int row1 = (i - 1) / m;
                int col1 = (i - 1) % m;
                grid[row][col] = grid[row1][col1];
            }
            grid[0][0] = last;
        }
        return grid;
    }
};
