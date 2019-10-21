// https://helloacm.com/breadth-first-search-algorithm-to-solve-puzzle-rotting-oranges-in-a-grid/
// https://leetcode.com/problems/rotting-oranges/
// EASY, BFS

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        if (row == 0) return 0;
        int col = grid[0].size();
        int total = 0;
        queue<tuple<int, int, int>> Q;
        for (int i = 0; i < row; ++ i) {
            for (int j = 0; j < col; ++ j) {
                if (grid[i][j] == 2) {
                    // push the initial rotten oranges to the queue
                    Q.push(make_tuple(i, j, 0));
                } else if (grid[i][j] == 1) {
                    total ++;  // fresh count
                }
            }
        }
        int step = 0, cnt = 0; // count to make a fresh rotten
        while (!Q.empty()) {
            auto p = Q.front();
            Q.pop();
            int r = std::get<0>(p);
            int c = std::get<1>(p);
            int s = std::get<2>(p);
            step = max(step, s);
            if ((r > 0) && (grid[r - 1][c] == 1)) {
                Q.push(make_tuple(r - 1, c, s + 1));
                grid[r - 1][c] = 2;
                cnt ++;
            }
            if ((c > 0) && (grid[r][c - 1] == 1)) {
                Q.push(make_tuple(r, c - 1, s + 1));
                grid[r][c - 1] = 2;
                cnt ++;
            }
            if ((r + 1 < row) && (grid[r + 1][c] == 1)) {
                Q.push(make_tuple(r + 1, c, s + 1));
                grid[r + 1][c] = 2;
                cnt ++;
            }
            if ((c + 1 < col) && (grid[r][c + 1] == 1)) {
                Q.push(make_tuple(r, c + 1, s + 1));
                grid[r][c + 1] = 2; 
                cnt ++;
            }            
        }
        return cnt == total ? step : -1;
    }
};
