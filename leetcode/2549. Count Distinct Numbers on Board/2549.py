# https://helloacm.com/teaching-kids-programming-count-distinct-numbers-on-board/
# https://leetcode.com/problems/count-distinct-numbers-on-board/
# EASY, MATH

class Solution:
    def distinctIntegers(self, n: int) -> int:
        return max(n - 1, 1)
