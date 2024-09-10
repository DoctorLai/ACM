# https://helloacm.com/teaching-kids-programming-find-the-maximum-achievable-number/
# https://leetcode.com/problems/find-the-maximum-achievable-number/
# EASY, MATH, GREEDY

class Solution:
    def theMaximumAchievableX(self, num: int, t: int) -> int:
        return num + t * 2
