# https://helloacm.com/teaching-kids-programming-top-down-and-bottom-up-dynamic-programming-algorithm-to-type-n-letters-on-a-2-keys-keyboard/
# https://leetcode.com/problems/2-keys-keyboard/
# MEDIUM, DP

class Solution:
    def minSteps(self, n: int) -> int:
        if n == 1:
            return 0
        dp = list(range(n + 1))
        for i in range(1, n + 1):
            for j in range(1, i // 2 + 1):
                if i % j == 0:
                    dp[i] = min(dp[i], dp[j] + i // j)
        return dp[n]
