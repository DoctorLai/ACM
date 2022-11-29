# https://helloacm.com/teaching-kids-programming-minimum-cuts-to-divide-a-circle/
# https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/
# EASY, MATH

class Solution:
    def numberOfCuts(self, n: int) -> int:
        if n == 1:
            return 0
        if n & 1:
            return n
        return n //2
