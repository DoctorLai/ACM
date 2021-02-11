# https://helloacm.com/dynamic-programming-algorithm-to-solve-the-poly-knapsack-ubounded-problem/
# https://binarysearch.com/problems/Poly-Knapsack
# MEDIUM, DP

class Solution:
    def solve(self, weights, values, capacity):
        dp = [0] * (capacity + 1)
        for i in range(1, capacity + 1):
            for j in range(len(weights)):
                if i >= weights[j]:
                    dp[i] = max(dp[i], dp[i - weights[j]] + values[j])
        return max(dp)
