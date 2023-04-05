# https://helloacm.com/teaching-kids-programming-k-items-with-the-maximum-sum/
# https://leetcode.com/problems/k-items-with-the-maximum-sum/
# EASY, MATH

class Solution:
    def kItemsWithMaximumSum(self, numOnes: int, numZeros: int, numNegOnes: int, k: int) -> int:
        return min(k, numOnes) - max(0, k - numZeros - numOnes)
