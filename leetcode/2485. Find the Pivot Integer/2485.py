# https://helloacm.com/teaching-kids-programming-algorithms-to-find-the-pivot-integer-of-the-first-n-natural-numbers/
# https://leetcode.com/problems/find-the-pivot-integer/
# EASY, MATH

class Solution:
    @cache
    def pivotInteger(self, n: int) -> int:
        x = sqrt((n+1)*n//2)
        if x.is_integer():
            return int(x)
        return -1
