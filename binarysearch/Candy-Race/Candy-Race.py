# https://helloacm.com/teaching-kids-programming-minmax-dynamic-programming-algorithm-game-of-picking-numbers-at-two-ends/
# https://binarysearch.com/problems/Candy-Race
# HARD, DP

class Solution:
    def solve(self, P):
        n = len(P)
        dp = [[0] * n for _ in range(n)]
        for i in range(n):
            dp[i][i] = P[i]

        for i in range(n - 2, -1, -1):
            for j in range(i + 1, n):
                dp[i][j] = max(P[i] - dp[i + 1][j], P[j] - dp[i][j - 1])            
        
        return dp[0][-1] > 0
