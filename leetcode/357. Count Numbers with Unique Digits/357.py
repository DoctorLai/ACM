# https://helloacm.com/teaching-kids-programming-dynamic-programming-algorithms-to-count-numbers-with-unique-digits/
# https://leetcode.com/problems/count-numbers-with-unique-digits/
# MEDIUM, DP

class Solution:
    def countNumbersWithUniqueDigits(self, n: int) -> int:
        dp = [0] * 11
        dp[0] = 1
        dp[1] = 9
        for i in range(2, n + 1):
            dp[i] = dp[i - 1] * (11 - i)
        return sum(dp[i] for i in range(n + 1))
