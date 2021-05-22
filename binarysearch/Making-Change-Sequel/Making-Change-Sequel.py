# https://helloacm.com/teaching-kids-programming-dynamic-programming-algorithm-to-compute-minimum-number-of-coins/
# https://binarysearch.com/problems/Making-Change-Sequel
# MEDIUM, DP, MATH

class Solution:
    def solve(self, denominations, amount):
        if not denominations:
            return 0
        dp = [0] + [math.inf] * amount
        for a in range(amount + 1):
            for d in denominations:
                if a >= d and dp[a - d] != math.inf:
                    dp[a] = min(dp[a], dp[a - d] + 1)
        return dp[amount] if dp[amount] != math.inf else -1
