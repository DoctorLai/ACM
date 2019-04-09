// https://helloacm.com/the-image-smoother-algorithm-in-c-java/
// https://leetcode.com/problems/image-smoother/

class Solution {
    public int[][] imageSmoother(int[][] M) {
        int row = M.length;
        if (row == 0) return M;
        int width = M[0].length;
        if (width == 0) return M;
        int[][] N = new int[row][width];
        for (int i = 0; i < row; ++ i) {
            for (int j = 0; j < width; ++ j) {
                int sum = 0, c = 0;
                for (int k = Math.max(0, i - 1); k <= Math.min(i + 1, row - 1); k ++) {
                    for (int u = Math.max(0, j - 1); u <= Math.min(j + 1, width - 1); u ++) {
                        sum += M[k][u];
                        c ++;
                    }
                }
                N[i][j] = sum / c;
            }
        }
        return N;        
    }
}
