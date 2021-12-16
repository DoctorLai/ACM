# https://helloacm.com/teaching-kids-programming-max-profit-of-rod-cutting-unbounded-knapsack-via-top-down-dynamic-programming-algorithm/
# https://binarysearch.com/problems/Rod-Cutting
# MEDIUM, DP

class Solution:
    def solve(self, prices, n):        
        @cache
        def dp(sz):
            if sz <= 0:
                return 0
            ans = 0
            for i in range(sz):
                ans = max(ans, dp(sz - i - 1) + prices[i])
            return ans
        return dp(n)
