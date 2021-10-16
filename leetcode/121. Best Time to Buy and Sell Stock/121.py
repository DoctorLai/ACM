# https://helloacm.com/teaching-kids-programming-best-time-to-buy-and-sell-stock-buy-and-sell-once-three-algorithms/
# https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
# EASY, MATH

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans = cur = 0
        for i in range(1, len(prices)):
            cur = max(0, cur + prices[i] - prices[i - 1])
            ans = max(ans, cur)
        return ans
