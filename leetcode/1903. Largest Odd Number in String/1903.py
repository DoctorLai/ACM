# https://helloacm.com/teaching-kids-programming-largest-odd-number-in-string/
# https://leetcode.com/problems/largest-odd-number-in-string/
# EASY, STRING, GREEDY

class Solution:
    def largestOddNumber(self, num: str) -> str:
        for i in range(len(num) - 1, -1, -1):
            if (int(num[i]) & 1) == 1:
                return num[:i+1]
        return ""
