# https://helloacm.com/teaching-kids-programming-dynamic-programming-algorithms-to-count-the-number-of-unique-binary-search-trees-catalan-numbers/
# https://binarysearch.com/problems/Number-of-Unique-Binary-Search-Trees
# MEDIUM, MATH, DP

class Solution:
    def solve(self, n):
        MOD = 10 ** 9 + 7
        dp = [0] * (n + 1)
        dp[0] = 1

        for i in range(1, n + 1):
            for k in range(i):
                dp[i] += dp[k] * dp[i - 1 - k]

        return dp[n] % MOD
