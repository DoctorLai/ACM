# https://helloacm.com/teaching-kids-programming-split-with-minimum-sum-sort-the-digits-greedy/
# https://leetcode.com/problems/split-with-minimum-sum/
# EASY, MATH, SORTING, GREEDY

class Solution:
    def splitNum(self, num: int) -> int:
        s = sorted(list(str(num)))
        return int("".join(s[::2])) + int("".join(s[1::2]))
