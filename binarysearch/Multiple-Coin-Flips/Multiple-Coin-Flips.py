# https://helloacm.com/teaching-kids-programming-multiple-strange-coin-flips-toss-top-down-dynamic-programming-algorithm-knapsack-variant/
# https://binarysearch.com/problems/Multiple-Coin-Flips
# MEDIUM, DP

class Solution:
    def solve(self, prob, target):
        n = len(prob)
        if target > n:
            return 0
        @cache                                         
        def f(i, h):
            if i == len(prob):
                return 1 if h == 0 else 0
            choose = prob[i] * f(i + 1, h - 1)
            skip = (1 - prob[i]) * f(i + 1, h)
            return choose + skip
        return f(0, target)
      
