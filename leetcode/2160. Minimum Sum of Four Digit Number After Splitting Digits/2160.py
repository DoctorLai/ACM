# https://helloacm.com/teaching-kids-programming-minimum-sum-of-four-digit-number-after-splitting-digits/
# https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/
# EASY, MATH

class Solution:
    def minimumSum(self, num: int) -> int:
        s = sorted(map(int, list(str(num))))
        return s[0] * 10 + s[3] + s[1] * 10 + s[2]
