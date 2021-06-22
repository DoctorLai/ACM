# https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
# https://helloacm.com/teaching-kids-programming-count-odd-numbers-in-an-interval-range/
# EASY, MATH

class Solution:
    def countOdds(self, low: int, high: int) -> int:        
        return (high + 1) // 2 - low // 2
