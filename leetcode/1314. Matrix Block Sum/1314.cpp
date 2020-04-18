// https://helloacm.com/dynamic-programming-algorithm-to-compute-the-block-sum-in-a-matrix/
// https://leetcode.com/problems/matrix-block-sum/
// MEDIUM, DP

class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        int row = mat.size();
        if (row == 0) return {{}};
        int col = mat[0].size();
        vector<vector<int>> res(row, vector<int>(col, 0));
        vector<vector<int>> dp(row, vector<int>(col, 0));
        for (int r = 0; r < row; ++ r) {
            for (int c = 0; c < col; ++ c) {
                int sum = mat[r][c];
                if (c > 0) sum += dp[r][c - 1];
                if (r > 0) sum += dp[r - 1][c];
                if ((r > 0) && (c > 0)) sum -= dp[r - 1][c - 1];
                dp[r][c] = sum;
            }
        }
        for (int r = 0; r < row; ++ r) {
            for (int c = 0; c < col; ++ c) {
                int minr = max(0, r - K);
                int minc = max(0, c - K) ;
                int maxr = min(r + K, row - 1);
                int maxc = min(c + K, col - 1);
                if (minr > 0 && minc > 0) {
                    res[r][c] = dp[maxr][maxc] + dp[minr - 1][minc - 1] - 
                        dp[minr - 1][maxc] - dp[maxr][minc - 1];
                } else if (minr > 0) {
                    res[r][c] = dp[maxr][maxc] - dp[minr - 1][maxc]; 
                } else if (minc > 0) {
                    res[r][c] = dp[maxr][maxc] - dp[maxr][minc - 1];                    
                } else {
                    res[r][c] = dp[maxr][maxc];
                }
            }
        }        
        return res;
    }
};
