# https://helloacm.com/teaching-kids-programming-find-if-digit-game-can-be-won/
# https://leetcode.com/problems/find-if-digit-game-can-be-won/
# EASY, MATH, GAME

class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        s = 0
        for i in nums:
            if i < 10:
                s += i
            else:
                s -= i
        return s != 0

