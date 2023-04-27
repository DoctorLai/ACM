# https://helloacm.com/teaching-kids-programming-minimum-amount-of-time-to-fill-cups-greedy-simulation-algorithm-and-math/
# https://leetcode.com/problems/minimum-amount-of-time-to-fill-cups/
# EASY, MATH

class Solution:
    def fillCups(self, A: List[int]) -> int:
        return max(max(A), (sum(A)+1)//2)
