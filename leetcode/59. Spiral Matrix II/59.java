// https://helloacm.com/algorithm-to-generate-the-spiral-matrix-in-clock-wise-order/
// https://leetcode.com/problems/spiral-matrix-ii/
// MEDIUM, SIMULATION

class Solution {
    public int[][] generateMatrix(int n) {
        int[][] res = new int[n][n];
        for (int[] x: res) {
            Arrays.fill(x, -1);
        }
        if (n <= 1) {
            res[0][0] = 1;
            return res;
        }
        int d[][] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int x = 0, r = 0, c = 0, num = 1;
        int total = n * n;
        res[0][0] = 1;
        while (num < total) {
            int nr = r + d[x][0];
            int nc = c + d[x][1];
            if (nr >= n || nc >= n || nr < 0 || nc < 0 || res[nr][nc] != -1) {
                x = (x + 1) % 4;
            } else {
                r = nr;
                c = nc;
                res[r][c] = ++ num;
            }
        }
        return res;        
    }
}
