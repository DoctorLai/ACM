# https://helloacm.com/dynamic-programming-algorithm-to-solve-0-1-knapsack-problem/
# https://binarysearch.com/problems/0-1-Knapsack
# MEDIUM, DP

class Solution:
    def solve(self, weights, values, capacity):
        sz = len(weights);
        dp = [[0] * (capacity + 1) for _ in range(sz + 1)]
        for i in range(1, sz + 1):
            for j in range(1, capacity + 1):
                dp[i][j] = dp[i - 1][j]
                if j >= weights[i - 1]:
                    dp[i][j] = max(dp[i][j], dp[i - 1][j - weights[i - 1]]
                    + values[i - 1])
        return dp[sz][capacity]
       
