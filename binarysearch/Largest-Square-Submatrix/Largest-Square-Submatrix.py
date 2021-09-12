# https://helloacm.com/teaching-kids-programming-dynamic-programming-algorithm-to-calculate-largest-square-submatrix/
# https://binarysearch.com/problems/Largest-Square-Submatrix
# HARD, DP

class Solution:
    def solve(self, matrix):
        rows, cols = len(matrix), len(matrix[0])
        dp = [[0 for _ in range(cols)] for _ in range(rows)]
        ans = 0
        for r in range(rows):
            for c in range(cols):
                if matrix[r][c] == 0:
                    dp[r][c] = 0
                else:
                    dp[r][c] = 1
                    if r > 0 and c > 0 and matrix[r-1][c] == 1 and matrix[r][c-1] == 1 and matrix[r-1][c-1] == 1:
                        dp[r][c] = min(dp[r-1][c], dp[r][c-1], dp[r - 1][c - 1]) + 1
                    ans = max(ans, dp[r][c])
        return ans ** 2
