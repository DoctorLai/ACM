# https://helloacm.com/teaching-kids-programming-largest-3-same-digit-number-in-string/
# https://leetcode.com/problems/largest-3-same-digit-number-in-string/
# EASY, MATH, BRUTEFORCE

class Solution:
    def largestGoodInteger(self, num: str) -> str:
        for i in range(9, -1, -1):
            if str(i)*3 in num:
                return str(i)*3
        return ""
